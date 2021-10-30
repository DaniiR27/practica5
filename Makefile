#Este es el makefile de la practica5
practica5: arithmetic_operators/arithmetic_operators.cc boolean_operators/boolean_operators.cc change_case/change_case.cc data_type/data_types.cc references/references.cc short_circuit/short_circuit.cc
		g++ arithmetic_operators/arithmetic_operators.cc -o arithmetic_operators/arithmetic_operators
		g++ boolean_operators/boolean_operators.cc -o boolean_operators/boolean_operators
		g++ change_case/change_case.cc -o change_case/change_case
		g++ data_type/data_types.cc -o data_type/data_types
		g++ references/references.cc -o references/references
		g++ short_circuit/short_circuit.cc -o short_circuit/short_circuit