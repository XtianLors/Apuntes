# Declaring the domain to use:
x <- 1:800
y <- rpois(800, x)

# Declare the 
data <- data.frame(x, y, row.names=NULL)
table_data <- print(head(data), quote = FALSE, row.names = FALSE)

print(head(data), quote = FALSE, row.names = FALSE)


#This one prints only the values to read in C format.
write.table( data, 
             file = "C:\\Users\\crisd\\Downloads\\EscuelaCD\\LogicaProgramación\\Semana3\\Repaso\\seismic.dat",
             quote=FALSE,
             sep = " ",
             row.names = FALSE #Very important to avoid row names
             )

write.table(print(head(data), quote = FALSE, row.names = FALSE), 
            file = "C:\\Users\\crisd\\Downloads\\EscuelaCD\\LogicaProgramación\\Semana3\\Repaso\\seismic.dat",
            sep = "\n")

#This one prints an additional column with enumeration.
write.table(print(head(data), quote = FALSE, row.names = FALSE), 
            file = "C:\\Users\\crisd\\Downloads\\EscuelaCD\\LogicaProgramación\\Semana3\\Repaso\\seismic.dat",
            quote=FALSE,
            sep = " ",
            col.names=FALSE)

#This one prints an additional column with enumeration. Without the name header
write.table(print(head(data), quote = FALSE, row.names = FALSE), 
            file = "C:\\Users\\crisd\\Downloads\\EscuelaCD\\LogicaProgramación\\Semana3\\Repaso\\seismic.dat",
            quote=FALSE,
            sep = " ",
            col.names=NA)

#This one prints an additional column with enumeration. Without the name header
write.table( data, 
             file = "C:\\Users\\crisd\\Downloads\\EscuelaCD\\LogicaProgramación\\Semana3\\Repaso\\seismic.dat",
             quote=FALSE,
             sep = " ",
             col.names=NA,
             row.names = FALSE
)

#This one prints an additional column with enumeration. Without the name header
write.table( data, 
             file = "C:\\Users\\crisd\\Downloads\\EscuelaCD\\LogicaProgramación\\Semana3\\Repaso\\seismic.dat",
             quote=FALSE,
             sep = " ",
             col.names=NA,
             row.names = FALSE
)

#This one prints an additional column with enumeration. Without the name header
write.table( data, 
             file = "C:\\Users\\crisd\\Downloads\\EscuelaCD\\LogicaProgramación\\Semana3\\Repaso\\seismic.dat",
             quote=FALSE,
             sep = " ")

#This one prints an additional column with enumeration. Without the name header
write.table(c(x, y), 
            file = "C:\\Users\\crisd\\Downloads\\EscuelaCD\\LogicaProgramación\\Semana3\\Repaso\\seismic.dat",
            quote=FALSE,
            sep = " ",
            col.names=NA)

#References

#https://www.rdocumentation.org/packages/base/versions/3.6.2/topics/data.frame

#https://www.rdocumentation.org/packages/base/versions/3.6.2/topics/print.data.frame
#https://www.rdocumentation.org/packages/utils/versions/3.6.2/topics/write.table
#https://rdrr.io/github/aryoda/R_enumerations/man/create.enum.html
#https://www.oilshell.org/blog/2018/11/30.html

# Other References
#https://www.rdocumentation.org/packages/base/versions/3.6.2/topics/write

# https://www.statology.org/write-table-in-r/
# https://stat.ethz.ch/R-manual/R-devel/library/base/html/write.html
# https://rstudio.github.io/r-manuals/r-intro/OS-facilities.html