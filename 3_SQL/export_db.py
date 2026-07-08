import sqlite3
import os
import sys

def export_db_to_sqlite(source_db: str, dest_sqlite: str) -> bool:
    """
    Export an SQLite .db file to a .sqlite file.
    Returns True if successful, False otherwise.
    """
    try:
        # Validate source file
        if not os.path.exists(source_db):
            print(f"Error: Source database '{source_db}' does not exist.")
            return False

        # Ensure destination directory exists
        os.makedirs(os.path.dirname(dest_sqlite) or ".", exist_ok=True)

        # Connect to source and destination
        with sqlite3.connect(source_db) as src_conn:
            with sqlite3.connect(dest_sqlite) as dest_conn:
                # Perform the backup
                src_conn.backup(dest_conn)
                print(f"Export completed: '{source_db}' → '{dest_sqlite}'")
        return True

    except sqlite3.Error as e:
        print(f"SQLite error: {e}")
        return False
    except Exception as e:
        print(f"Unexpected error: {e}")
        return False

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python export_db.py source.db destination.sqlite")
        sys.exit(1)

    source_path = sys.argv[1]
    dest_path = sys.argv[2]

    success = export_db_to_sqlite(source_path, dest_path)
    sys.exit(0 if success else 1)