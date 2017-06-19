mkdir -p test
python generate_datatypes.py --namespace=1 --typedescriptions=schema/DewesoftNodeIds.csv --selected_types=schema/datatypes_dewesoft.txt schema/Opc.Ua.Types.bsd schema/Custom.Opc.Ua.Dewesoft.bsd test/ua_dewesoft

