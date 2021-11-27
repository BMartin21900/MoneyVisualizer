#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4;
// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC;
// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3;
// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F;
// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA;
// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7;
// System.Reflection.AssemblyTrademarkAttribute
struct AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2;
// System.CLSCompliantAttribute
struct CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.Runtime.InteropServices.GuidAttribute
struct GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063;
// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4, ___m_company_0)); }
	inline String_t* get_m_company_0() const { return ___m_company_0; }
	inline String_t** get_address_of_m_company_0() { return &___m_company_0; }
	inline void set_m_company_0(String_t* value)
	{
		___m_company_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_company_0), (void*)value);
	}
};


// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC, ___m_copyright_0)); }
	inline String_t* get_m_copyright_0() const { return ___m_copyright_0; }
	inline String_t** get_address_of_m_copyright_0() { return &___m_copyright_0; }
	inline void set_m_copyright_0(String_t* value)
	{
		___m_copyright_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_copyright_0), (void*)value);
	}
};


// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::m_description
	String_t* ___m_description_0;

public:
	inline static int32_t get_offset_of_m_description_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3, ___m_description_0)); }
	inline String_t* get_m_description_0() const { return ___m_description_0; }
	inline String_t** get_address_of_m_description_0() { return &___m_description_0; }
	inline void set_m_description_0(String_t* value)
	{
		___m_description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_description_0), (void*)value);
	}
};


// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____version_0), (void*)value);
	}
};


// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::m_product
	String_t* ___m_product_0;

public:
	inline static int32_t get_offset_of_m_product_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA, ___m_product_0)); }
	inline String_t* get_m_product_0() const { return ___m_product_0; }
	inline String_t** get_address_of_m_product_0() { return &___m_product_0; }
	inline void set_m_product_0(String_t* value)
	{
		___m_product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_product_0), (void*)value);
	}
};


// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::m_title
	String_t* ___m_title_0;

public:
	inline static int32_t get_offset_of_m_title_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7, ___m_title_0)); }
	inline String_t* get_m_title_0() const { return ___m_title_0; }
	inline String_t** get_address_of_m_title_0() { return &___m_title_0; }
	inline void set_m_title_0(String_t* value)
	{
		___m_title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_title_0), (void*)value);
	}
};


// System.Reflection.AssemblyTrademarkAttribute
struct AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTrademarkAttribute::m_trademark
	String_t* ___m_trademark_0;

public:
	inline static int32_t get_offset_of_m_trademark_0() { return static_cast<int32_t>(offsetof(AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2, ___m_trademark_0)); }
	inline String_t* get_m_trademark_0() const { return ___m_trademark_0; }
	inline String_t** get_address_of_m_trademark_0() { return &___m_trademark_0; }
	inline void set_m_trademark_0(String_t* value)
	{
		___m_trademark_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_trademark_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.CLSCompliantAttribute
struct CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.CLSCompliantAttribute::m_compliant
	bool ___m_compliant_0;

public:
	inline static int32_t get_offset_of_m_compliant_0() { return static_cast<int32_t>(offsetof(CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249, ___m_compliant_0)); }
	inline bool get_m_compliant_0() const { return ___m_compliant_0; }
	inline bool* get_address_of_m_compliant_0() { return &___m_compliant_0; }
	inline void set_m_compliant_0(bool value)
	{
		___m_compliant_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_memberName_0), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.InteropServices.GuidAttribute
struct GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::_val
	String_t* ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____val_0), (void*)value);
	}
};


// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.CLSCompliantAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270 (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * __this, bool ___isCompliant0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GuidAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuidAttribute__ctor_mCCEF3938DF601B23B5791CEE8F7AF05C98B6AFEA (GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063 * __this, String_t* ___guid0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyTrademarkAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTrademarkAttribute__ctor_m6FBD5AAE48F00120043AD8BECF2586896CFB6C02 (AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2 * __this, String_t* ___trademark0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3 (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * __this, String_t* ___copyright0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8 (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * __this, String_t* ___product0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0 (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * __this, String_t* ___company0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25 (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * __this, String_t* ___description0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.ParamArrayAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719 (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * __this, const RuntimeMethod* method);
static void zxing_unity_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * tmp = (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 *)cache->attributes[0];
		CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270(tmp, true, NULL);
	}
	{
		GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063 * tmp = (GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063 *)cache->attributes[1];
		GuidAttribute__ctor_mCCEF3938DF601B23B5791CEE8F7AF05C98B6AFEA(tmp, il2cpp_codegen_string_new_wrapper("\x45\x43\x45\x33\x41\x42\x37\x34\x2D\x39\x44\x44\x31\x2D\x34\x43\x46\x42\x2D\x39\x44\x34\x38\x2D\x46\x43\x42\x46\x42\x33\x30\x45\x30\x36\x44\x36"), NULL);
	}
	{
		AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2 * tmp = (AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2 *)cache->attributes[2];
		AssemblyTrademarkAttribute__ctor_m6FBD5AAE48F00120043AD8BECF2586896CFB6C02(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * tmp = (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC *)cache->attributes[3];
		AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3(tmp, il2cpp_codegen_string_new_wrapper("\x43\x6F\x70\x79\x72\x69\x67\x68\x74\x20\xC2\xA9\x20\x32\x30\x31\x32"), NULL);
	}
	{
		AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * tmp = (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA *)cache->attributes[4];
		AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8(tmp, il2cpp_codegen_string_new_wrapper("\x5A\x58\x69\x6E\x67\x2E\x4E\x65\x74"), NULL);
	}
	{
		AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * tmp = (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 *)cache->attributes[5];
		AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0(tmp, il2cpp_codegen_string_new_wrapper("\x5A\x58\x69\x6E\x67\x2E\x4E\x65\x74\x20\x44\x65\x76\x65\x6C\x6F\x70\x6D\x65\x6E\x74"), NULL);
	}
	{
		AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * tmp = (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 *)cache->attributes[6];
		AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25(tmp, il2cpp_codegen_string_new_wrapper("\x70\x6F\x72\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x6A\x61\x76\x61\x20\x62\x61\x73\x65\x64\x20\x62\x61\x72\x63\x6F\x64\x65\x20\x73\x63\x61\x6E\x6E\x69\x6E\x67\x20\x6C\x69\x62\x72\x61\x72\x79\x20\x66\x6F\x72\x20\x2E\x6E\x65\x74\x20\x28\x6A\x61\x76\x61\x20\x7A\x78\x69\x6E\x67\x20\x31\x34\x2E\x30\x39\x2E\x32\x30\x32\x30\x20\x31\x37\x3A\x30\x33\x3A\x30\x39\x29"), NULL);
	}
	{
		AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * tmp = (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 *)cache->attributes[7];
		AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D(tmp, il2cpp_codegen_string_new_wrapper("\x7A\x78\x69\x6E\x67\x2E\x6E\x65\x74\x20\x66\x6F\x72\x20\x2E\x6E\x65\x74\x20\x33\x2E\x35\x20\x61\x6E\x64\x20\x75\x6E\x69\x74\x79\x20\x28\x77\x2F\x6F\x20\x53\x79\x73\x74\x65\x6D\x2E\x44\x72\x61\x77\x69\x6E\x67\x29"), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[8];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[9];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[10];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * tmp = (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F *)cache->attributes[11];
		AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D(tmp, il2cpp_codegen_string_new_wrapper("\x30\x2E\x31\x36\x2E\x36\x2E\x30"), NULL);
	}
}
static void DigitContainer_t8D66F0B6F879AC64D6079341E45462A3E69429E9_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void DigitContainer_t7B54A6DC1B01A0D689F978E020AAB984A48D6ECD_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void BarcodeFormat_t96B0D16A5DAF539152437C2BEDDA70E362B52B65_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void BarcodeReader_tA5699011374427549C51833EE22EF6E29F873B4E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * tmp = (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 *)cache->attributes[0];
		CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270(tmp, false, NULL);
	}
}
static void U3CU3Ec_t7E894CF991B91AFAC15E4B2A9774563754D8B960_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_explicitResultPointFound(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_ResultFound(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_U3CAutoRotateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_U3CTryInvertedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_BarcodeReaderGeneric_get_AutoRotate_m8E015DC7E354D143E70502BDDD67100E0525C96B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_BarcodeReaderGeneric_get_TryInverted_m6E9CB5FFAC9673A4548A369685B445F355B03DC9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_BarcodeReaderGeneric_U3Cget_OptionsU3Eb__8_0_m521B3AEDAFFD5196FCBE51F66F8CD012313ED666(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tBCA96404D1043225918E4ADB3EBC541D39EC6A23_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CTextU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CRawBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CResultPointsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CBarcodeFormatU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CResultMetadataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CTimestampU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CNumBitsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_get_Text_m32E0659D67493CF7D9FDDBD440490C152C698F06(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_Text_mD8C2265F928B33A9A8DCD583BA170FC4FE3C58F5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_get_RawBytes_m7A22F5595F78E255719351391CB3D67D2344811A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_RawBytes_m75E4D8B5FC0E37F81D09406877FEC72E716333A6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_get_ResultPoints_m75EC06733675ABD87A6CC32CEF388296BDF54315(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_ResultPoints_m19AD293A0D2336B845BBC9F8348681436BE51D2E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_get_BarcodeFormat_m0B8E8252ECF56E2C1CFDB8573925B32E80E8D93A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_BarcodeFormat_mFD5D5E783825C15B67F25B1F5D5DA32808719F42(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_get_ResultMetadata_m741CBF666B0AFA862063A5100631C4086E4A8366(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_ResultMetadata_m9588FDB4FD0645FED24442312D6C08EA687EDFC6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_Timestamp_m5AAC86B0DD3E4E0147933DDCFCC299F6B6BC1446(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_NumBits_mFB16F9D1675A8A56DF7E9BED417ACE65B0CDB8D3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Color32LuminanceSource_t4F7B4838CE4E0A338BABEA68D76E4F4BDAA69297_CustomAttributesCacheGenerator_Color32LuminanceSource__ctor_m417FFD9561B4D3A438E852D44E5E7C08FADE230F(CustomAttributesCache* cache)
{
	{
		CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * tmp = (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 *)cache->attributes[0];
		CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270(tmp, false, NULL);
	}
}
static void Color32LuminanceSource_t4F7B4838CE4E0A338BABEA68D76E4F4BDAA69297_CustomAttributesCacheGenerator_Color32LuminanceSource_SetPixels_m35D5844FC05A8037A22305CB8E69827C354E2EBA(CustomAttributesCache* cache)
{
	{
		CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * tmp = (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 *)cache->attributes[0];
		CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270(tmp, false, NULL);
	}
}
static void U3CU3Ec_t2ADEC2A22E0CE599D00D7E4E629E5FDF8049AC5A_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Mode_tC8E92AEE7DB1FCCCAA5C26ECFAF7B4FBA8C6355F_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Mode_tC8E92AEE7DB1FCCCAA5C26ECFAF7B4FBA8C6355F_CustomAttributesCacheGenerator_U3CBitsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Mode_tC8E92AEE7DB1FCCCAA5C26ECFAF7B4FBA8C6355F_CustomAttributesCacheGenerator_Mode_get_Name_m60E9150A2564C8EFB4ACCACBBCFA10ADCDC93518(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Mode_tC8E92AEE7DB1FCCCAA5C26ECFAF7B4FBA8C6355F_CustomAttributesCacheGenerator_Mode_set_Name_m4EFA54EA8FB97B1CEB2C571313CC86581B8E9E4E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Mode_tC8E92AEE7DB1FCCCAA5C26ECFAF7B4FBA8C6355F_CustomAttributesCacheGenerator_Mode_set_Bits_m434921FA04B571E87809A77377D8FC833ED48E2E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Version_tC46E47BCA57ED5821100DB382386A1A57E74E4BA_CustomAttributesCacheGenerator_Version__ctor_m07CEA1C42B28CF3177A919FAF9743E767DB518F7____ecBlocks2(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void ECBlocks_tD1364BE8E77AD0F8E745BF5ECE31927CC99AF63B_CustomAttributesCacheGenerator_ECBlocks__ctor_mAD871973346EF306D20B111D8325E62A8EDE2BA9____ecBlocks1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CSegmentIndexU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CFileIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CIsLastSegmentU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CSegmentCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CSenderU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CAddresseeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CFileNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CFileSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CChecksumU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CTimestampU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_SegmentIndex_m88367E2ABBEA3907146857EA81D3DF52829A1E9E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_FileId_m99F5D426BFFC54D6CE04F332D82557BDF8103781(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_IsLastSegment_m9D37E6D389FFEF7FFC6E3900BCEDDEAF74167C97(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_SegmentCount_mEDC62293A71C71E6B7A6546B8458817C4E4095B9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Sender_m3B2E3B0DB9E161BCA4086A2874E09A6A93EE5BDD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Addressee_m9B77B18A9285D1E89939DD2400D37D27E01E2009(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_FileName_m05110D5FA984CFA1FCB459BB68B2CC90DCC10B1D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_FileSize_m94E34C3660D50E409B9BAFEDCD11148ACCF360E9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Checksum_m89CAF8092D351BCC3C5201391CE17996CF21C86B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Timestamp_mB8A19B18B9885C4031F6E5F43E1306C63CBBB2FF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_U3CColumnCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_U3CErrorCorrectionLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_U3CRowCountUpperU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_U3CRowCountLowerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_U3CRowCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_get_ColumnCount_m66116B819727D3C6DD263C009307D738144FF213(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_set_ColumnCount_m5D169BCC303CC34763D4930BA8248FFA02F45302(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_get_ErrorCorrectionLevel_m59E9341C122588CC5BB102449F2C2C4216CD69B5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_set_ErrorCorrectionLevel_m05BF6313858B067D83E9191AEB1E7489DE13FBDA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_get_RowCountUpper_m97DC41196C854874F7BFA88011DBB8661F056902(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_set_RowCountUpper_m59A92F63E0D5BF3ED32706EF1742D278BCD60F4E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_get_RowCountLower_mC0C5F2E1C8A5C8A5B15B93774FD3F1CF6C075A14(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_set_RowCountLower_m9E1C514AC5A0E71FB2F8FECE048962309C1B20D1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_get_RowCount_mBBBED731F988E702156501B86B840F1CC30B56C5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_set_RowCount_m2DD347FBB1AB8C8E508AFA9B298A22BEAD776D59(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CTopLeftU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CTopRightU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CBottomLeftU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CBottomRightU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CMinXU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CMaxXU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CMinYU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CMaxYU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_TopLeft_m5FCA9A45B2A1DA35DB3A371696E7CDEC4B2B90CA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_TopLeft_mF40A7EA75597E429128DB8C257644C76FBF957C8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_TopRight_m87A0239397C37B336B0D11AECBDCF890EF6BCA01(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_TopRight_m7134D1193E6DED8924B81E37112CEFF090D85D9D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_BottomLeft_m80E0172008361F09E66F71E62BDD2B01F7DC616E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_BottomLeft_mDFF7B8CC362F6FE2A6C2D11E75B2FC0011C5DB41(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_BottomRight_mA3C15CF08D520CD14A26B722748A06362EAE97A3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_BottomRight_mA3543D0CEB31756C25DC011EF6BE83036853E9EB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_MinX_mE6E01C95DDBF914C25AFA4F23F04AC5736D809C8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_MinX_m1926B5A87708ED857CF70B3D2E0C664E14FC81E9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_MaxX_mF8210A6BDE04D056A7E0DBF250490D2E7AAB0BB3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_MaxX_m5132BB87F82ACA7032BDF94E4EEE3C0DD25E0C31(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_MinY_m8B203963E36267CE7A9E1CEA6CD8A632E41DD7C2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_MinY_mC6561381436AD2010E440166A060964065A2FCE5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_MaxY_m86E254D21FFF9BBDA87913890C5D13AAF592C4DE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_MaxY_mE93481DF7A828558CA38869E83368EAB770FE8B7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_U3CStartXU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_U3CEndXU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_U3CBucketU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_U3CRowNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_get_StartX_m3628872876C9330100931D3EFA610D4C8AA70797(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_set_StartX_mD214D45F87DBF288B1998C00AE7E19C5E01D5CD2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_get_EndX_m6A8E77E64636571156F2001257ED31B6141ACB23(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_set_EndX_mEF6753B951E545476057F29442BA4BFB51DC487E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_get_Bucket_m082927A5062ED85C71B23D2D103DBE07D3F0CF42(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_set_Bucket_m5F203DCF40FDB9EE782C5DFDC545AB144D7881BB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_get_Value_m925794C583F49E917BAB5124A78F5ED0B95FAB52(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_set_Value_m3200FCC6B4FBD0C77C9CF220A03BB1C20C94E6D9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_get_RowNumber_mA595A0B7BDBEF5884FD44728B657798D528D98F0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_set_RowNumber_m49EE9B3DB035DF5BAE491C01E9DDCCF7BF973D71(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_U3CMetadataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_U3CDetectionResultColumnsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_U3CBoxU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_U3CColumnCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_get_Metadata_mF1464F27BCB7262F74F959ED2A2E0F9CA7CD44E1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_set_Metadata_m516A58BBF0043F37DF279F5D816533009205C5DB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_get_DetectionResultColumns_m60F4ADC1D96C0635B337425A1757452808527B51(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_set_DetectionResultColumns_mB93FC0826B1B557E0DD951E992F3B9133E3FFD54(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_get_Box_m66A67ED5936F9569B99480E2ECEF3CACC0090017(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_set_Box_m9B4AF3CD39CA5B5D5EE5B09AB6A5D67CC0DD77E0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_get_ColumnCount_m6244C4FD50D00D23620159EF05DC657E8C67DED1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_set_ColumnCount_m55F20CEE1D60DDE4B0567CA71CA4C4E689276F74(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultColumn_t1832CDC43801BBC411F494A161B46335CE1A0BB8_CustomAttributesCacheGenerator_U3CBoxU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultColumn_t1832CDC43801BBC411F494A161B46335CE1A0BB8_CustomAttributesCacheGenerator_U3CCodewordsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultColumn_t1832CDC43801BBC411F494A161B46335CE1A0BB8_CustomAttributesCacheGenerator_DetectionResultColumn_get_Box_mCAD9587E50906A2C6C39EAAC59CBDDCB76654B50(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultColumn_t1832CDC43801BBC411F494A161B46335CE1A0BB8_CustomAttributesCacheGenerator_DetectionResultColumn_set_Box_m4B1BD8A21434E232D163F0321C25CB2553613DD0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultColumn_t1832CDC43801BBC411F494A161B46335CE1A0BB8_CustomAttributesCacheGenerator_DetectionResultColumn_get_Codewords_mB48368EC7A5F89A977B24D5A0037F6E9B5829B39(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultColumn_t1832CDC43801BBC411F494A161B46335CE1A0BB8_CustomAttributesCacheGenerator_DetectionResultColumn_set_Codewords_mCE3169D6F1D653E6CE69FB3D5EC75D6A3AB14588(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultRowIndicatorColumn_t3EC909EB1B297125FBEA40ACB6976707E6388D91_CustomAttributesCacheGenerator_U3CIsLeftU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultRowIndicatorColumn_t3EC909EB1B297125FBEA40ACB6976707E6388D91_CustomAttributesCacheGenerator_DetectionResultRowIndicatorColumn_get_IsLeft_mBE0FDC73698BC6A5FCFFB6BBD579E533906FDD1D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultRowIndicatorColumn_t3EC909EB1B297125FBEA40ACB6976707E6388D91_CustomAttributesCacheGenerator_DetectionResultRowIndicatorColumn_set_IsLeft_mDE898E63A52CC200D64E7677DCAFA8E455235FD2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417DetectorResult_t100A9C82B053BFE7669F95BDDF8F04EE60745447_CustomAttributesCacheGenerator_U3CBitsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417DetectorResult_t100A9C82B053BFE7669F95BDDF8F04EE60745447_CustomAttributesCacheGenerator_U3CPointsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417DetectorResult_t100A9C82B053BFE7669F95BDDF8F04EE60745447_CustomAttributesCacheGenerator_PDF417DetectorResult_get_Bits_m6D65906AA0136F682CA5415FDD544D8A33BE283B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417DetectorResult_t100A9C82B053BFE7669F95BDDF8F04EE60745447_CustomAttributesCacheGenerator_PDF417DetectorResult_set_Bits_m09AC798E68DB40AAD4C4F016871E13E1710206EA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417DetectorResult_t100A9C82B053BFE7669F95BDDF8F04EE60745447_CustomAttributesCacheGenerator_PDF417DetectorResult_get_Points_m2177F8852C3985896E0196B6F5E97F876FC40FD6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417DetectorResult_t100A9C82B053BFE7669F95BDDF8F04EE60745447_CustomAttributesCacheGenerator_PDF417DetectorResult_set_Points_mA03F76A570639AF8D862546B5A6E34E8654318C6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ModulusGF_tC997B462E48F703F8E0CEF6B6F99F86C1B12DF44_CustomAttributesCacheGenerator_U3CZeroU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ModulusGF_tC997B462E48F703F8E0CEF6B6F99F86C1B12DF44_CustomAttributesCacheGenerator_U3COneU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ModulusGF_tC997B462E48F703F8E0CEF6B6F99F86C1B12DF44_CustomAttributesCacheGenerator_ModulusGF_get_Zero_mE848472485073BDA4FE76FCBC8ACB9CF2483DF75(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ModulusGF_tC997B462E48F703F8E0CEF6B6F99F86C1B12DF44_CustomAttributesCacheGenerator_ModulusGF_set_Zero_mC5CDE662A5F02D0E03918365C64D4B09807D94EE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ModulusGF_tC997B462E48F703F8E0CEF6B6F99F86C1B12DF44_CustomAttributesCacheGenerator_ModulusGF_get_One_mFD38F996AC748CEF116E07197BBF4A3CCA3EA13E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ModulusGF_tC997B462E48F703F8E0CEF6B6F99F86C1B12DF44_CustomAttributesCacheGenerator_ModulusGF_set_One_mD3B73BB62B0380A3B2D0D15792E961F3C1ECF374(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_U3CColorU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_U3CLengthU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_U3CSimilarU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_U3CSmallU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_U3CLargeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_get_Color_m9237FEB696832C0D48A914C304C3E4FC9408CDA7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_set_Color_mBA38D26E3A603C33603E7251A96221F7C5E03CF1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_get_Length_mF271AFD0E3BA976742D19FCD56FF0352E71867EB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_set_Length_m8D2D22E98309CD40AF7ED11A6FF0DDCABE4773A5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_get_Similar_m58F66FDDDCB9D410E6716DB4A1541F81219C3C61(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_set_Similar_mAF0D7F2FC87F5F3EA48CEBAC7802E5DFA1EF5B18(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_get_Small_m7ED736A27C5490669B6F75760C9E500A2D833799(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_set_Small_m950F71EF3260268A9911832A0A995C1E4464290D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_get_Large_m2EEBDFB54F284DA5BE2BC972B94AD906659AED2A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_set_Large_m8F6B4FA327F0409620FB9C74D90D6AE285351110(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataCharacter_tD3F81CF7CEA1FF4BA70FDC519874451AAF000F1C_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataCharacter_tD3F81CF7CEA1FF4BA70FDC519874451AAF000F1C_CustomAttributesCacheGenerator_U3CChecksumPortionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataCharacter_tD3F81CF7CEA1FF4BA70FDC519874451AAF000F1C_CustomAttributesCacheGenerator_DataCharacter_get_Value_mDB3E6C3EFAFD86B00FFBAF2C39CC8B3F706B4C79(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataCharacter_tD3F81CF7CEA1FF4BA70FDC519874451AAF000F1C_CustomAttributesCacheGenerator_DataCharacter_set_Value_m2A3D439C3A64D795E216D5DCD8D3B450DE056574(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataCharacter_tD3F81CF7CEA1FF4BA70FDC519874451AAF000F1C_CustomAttributesCacheGenerator_DataCharacter_get_ChecksumPortion_m446EDC0539E8923D1BD442A40A7C480A22E7E476(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataCharacter_tD3F81CF7CEA1FF4BA70FDC519874451AAF000F1C_CustomAttributesCacheGenerator_DataCharacter_set_ChecksumPortion_m3E3100C628B149F20D2CB909DEB42E190828C059(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_U3CStartEndU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_U3CResultPointsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_FinderPattern_get_Value_m35C412D669847C8807A0FB1C4EF2D8326CD98BB2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_FinderPattern_set_Value_m5C50805626F0489D4FAE1E39CD5A5D3FB4700D96(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_FinderPattern_get_StartEnd_m5A0882A63C3C52CCD383FB979D63EA9A1D6D5CCB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_FinderPattern_set_StartEnd_m4EDF128FA1B17FE4AB36AAA022FA997CCFF47726(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_FinderPattern_get_ResultPoints_mE6B53F34B426885BC7D47FB0674249167A127329(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_FinderPattern_set_ResultPoints_mB633B0E3088584339F4904FA439AF12179E527DC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pair_tAE176E94A7008A08DA51BA12CCA6274B9D1FE8A0_CustomAttributesCacheGenerator_U3CFinderPatternU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pair_tAE176E94A7008A08DA51BA12CCA6274B9D1FE8A0_CustomAttributesCacheGenerator_U3CCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pair_tAE176E94A7008A08DA51BA12CCA6274B9D1FE8A0_CustomAttributesCacheGenerator_Pair_get_FinderPattern_m3941AC85A7DD0643EE6828B5426119F8B74E00EB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pair_tAE176E94A7008A08DA51BA12CCA6274B9D1FE8A0_CustomAttributesCacheGenerator_Pair_set_FinderPattern_m616FA0E5F7BB27BEF8B004C3199BD5EA7FCCAE2D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pair_tAE176E94A7008A08DA51BA12CCA6274B9D1FE8A0_CustomAttributesCacheGenerator_Pair_get_Count_m500DC0572ABC9BE26CF002B8E3DDE8DFDBCF63EC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pair_tAE176E94A7008A08DA51BA12CCA6274B9D1FE8A0_CustomAttributesCacheGenerator_Pair_set_Count_m64A5A80CBD61C105167EAD639687ED9CC08BC2DC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_U3CLeftCharU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_U3CRightCharU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_U3CFinderPatternU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_ExpandedPair_get_LeftChar_m7C153768A0DDE3B0CC1462351F2F55FD32C95B83(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_ExpandedPair_set_LeftChar_m19B4BCC078C318488E9DEAA8DC7CEB65BAE0F7F4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_ExpandedPair_get_RightChar_m8C61D04F8C5C7EAF1B63E0EED2BDF45678812C40(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_ExpandedPair_set_RightChar_m58971AE9A0153B9D56AD140DA82B404B4CA0298A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_ExpandedPair_get_FinderPattern_mB178A43F1498388DF19D22E574479F3A613DADCF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_ExpandedPair_set_FinderPattern_m7FD01C688BB32DD1F7320C170433ED8CB31105BB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedRow_t62007500341A39A091E609521B6AA441A72DBB44_CustomAttributesCacheGenerator_U3CPairsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedRow_t62007500341A39A091E609521B6AA441A72DBB44_CustomAttributesCacheGenerator_U3CRowNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedRow_t62007500341A39A091E609521B6AA441A72DBB44_CustomAttributesCacheGenerator_ExpandedRow_get_Pairs_m05BD42A999AD1685435721F87024B818FBB90609(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedRow_t62007500341A39A091E609521B6AA441A72DBB44_CustomAttributesCacheGenerator_ExpandedRow_set_Pairs_mB60065E279312A8AA6C63B6E34AC4A9015C3D824(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedRow_t62007500341A39A091E609521B6AA441A72DBB44_CustomAttributesCacheGenerator_ExpandedRow_get_RowNumber_m34F144D2C16B83A701C33C180A2516244CFAC95C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedRow_t62007500341A39A091E609521B6AA441A72DBB44_CustomAttributesCacheGenerator_ExpandedRow_set_RowNumber_mB582D15D76AFEDB86E34D1CD64A190BCF28552C7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodedObject_t395D0EB8FF87D37B25FECB691FE9B6F27371C6D1_CustomAttributesCacheGenerator_U3CNewPositionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodedObject_t395D0EB8FF87D37B25FECB691FE9B6F27371C6D1_CustomAttributesCacheGenerator_DecodedObject_get_NewPosition_m682BE254BC5C800AD4A358971D210AE2C307A065(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodedObject_t395D0EB8FF87D37B25FECB691FE9B6F27371C6D1_CustomAttributesCacheGenerator_DecodedObject_set_NewPosition_m0D5F5F1052CF689475ED69B13FFB1DC32C06149A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BitArray_tF3FB203DE28D45A37BD8E64A737BB7D590769AC0_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void BitMatrix_t86445EA5C452C5EA41B2C1A0C83310A20A13FB4E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CRawBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CNumBitsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CTextU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CByteSegmentsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CECLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CErrorsCorrectedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CStructuredAppendSequenceNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CErasuresU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CStructuredAppendParityU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3COtherU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_RawBytes_mDAD14E05A118511B78A8D72781DA3D96AC86D565(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_RawBytes_mF5E78C31A2D5499C2072598935B45370635705C2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_NumBits_m95448C26B0A8D228BB70033D103EDCA8C946BEE4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_NumBits_mE93AFA60C0F2EFACFB1524122A1EC3A6417F5363(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_Text_m187FC18A4F6F89E4F774528832434500AA07BE5C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_Text_mA5B7739FC93735755FB4FF7F236AF2EA9EBA038D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_ByteSegments_mA7776EACF79B8522234DFFAA83219B1630AF46B6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_ByteSegments_m39B2AD53C2D016D4DA712FA684EE87939361B190(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_ECLevel_mC6F9F319E9BF7094B510257B08D02434003DE343(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_ECLevel_mD884E0E666AF27854255108D9E60E8818AFF54E6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_ErrorsCorrected_m89F45C26FD48138A5B73D283F1B0B4E92E8E3E18(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_StructuredAppendSequenceNumber_m5083D3A28FB320F9B642909F87B1FE88430ECD42(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_StructuredAppendSequenceNumber_m38EE8374EB2E7F14D493EE6E13BCD92FD1A87AB4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_Erasures_m1399143D4171C25B08F5B124B201620CBC589F29(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_StructuredAppendParity_mA12D81BEB48C05F11B0098A6BF89E553ADF25E19(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_StructuredAppendParity_m0BA402E596FCABCE78F2D8E79CD4631CA1B0FCC3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_Other_m58090559656F6E8C695C9407563575F4355CB4C7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_Other_m53B9CE5AF3EFCFD68706A847DA9C489A3674D60C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_U3CHintsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_ValueChanged(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_DecodingOptions_get_Hints_m463AB21DF0F210190AC72338270A6EF718C8D3B0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_DecodingOptions_set_Hints_mB243CC2E6FFFBCA21DC86E3F6D5A84CB04EA19FE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_DecodingOptions_add_ValueChanged_m512AA9CEA7E71E2F7D5034C76791AEF88AF54540(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_DecodingOptions_remove_ValueChanged_m030B7A6A1BCDEE0E7596ACB4B354D515DA3AE45A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_DecodingOptions_U3C_ctorU3Eb__43_0_m96CECD03D670352EB9F539BA6B335DD5F91CAE81(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ChangeNotifyDictionary_2_t7A4998CFD086FD3B0E054ABA329E150035CAFDD8_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void ChangeNotifyDictionary_2_t7A4998CFD086FD3B0E054ABA329E150035CAFDD8_CustomAttributesCacheGenerator_ValueChanged(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ChangeNotifyDictionary_2_t7A4998CFD086FD3B0E054ABA329E150035CAFDD8_CustomAttributesCacheGenerator_ChangeNotifyDictionary_2_add_ValueChanged_m7AADB5C28C9F9DC4046768D8005778509B308845(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ChangeNotifyDictionary_2_t7A4998CFD086FD3B0E054ABA329E150035CAFDD8_CustomAttributesCacheGenerator_ChangeNotifyDictionary_2_remove_ValueChanged_m0ED3DF3204B1B6FD6C130B7C4C80038AE835709B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectorResult_tB1B6DE64866E772B0A58E6873264598E60D5681D_CustomAttributesCacheGenerator_U3CBitsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectorResult_tB1B6DE64866E772B0A58E6873264598E60D5681D_CustomAttributesCacheGenerator_U3CPointsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectorResult_tB1B6DE64866E772B0A58E6873264598E60D5681D_CustomAttributesCacheGenerator_DetectorResult_get_Bits_m7E2F04F2985DD874CC71AC66CD1C950F1873E9C6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectorResult_tB1B6DE64866E772B0A58E6873264598E60D5681D_CustomAttributesCacheGenerator_DetectorResult_set_Bits_m210D93424378FEB544F382FCA9E856B056930AD9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectorResult_tB1B6DE64866E772B0A58E6873264598E60D5681D_CustomAttributesCacheGenerator_DetectorResult_get_Points_m2A763015306B7DEE388344010FFA5B0200958F64(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectorResult_tB1B6DE64866E772B0A58E6873264598E60D5681D_CustomAttributesCacheGenerator_DetectorResult_set_Points_m6534D298F884BF158BA0DDBB51FB1E84F7465027(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ECI_t153DD0698C4E45107F5A05EB6D35CC3F05D50247_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ECI_t153DD0698C4E45107F5A05EB6D35CC3F05D50247_CustomAttributesCacheGenerator_ECI_set_Value_m50FA56752683DC1AC05E0607A39EC5BEDEEB0178(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_tF6A01FED2D28A6DEFFEFFA326BFD98C51977C935_CustomAttributesCacheGenerator_U3CCompactU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_tF6A01FED2D28A6DEFFEFFA326BFD98C51977C935_CustomAttributesCacheGenerator_U3CDatablocksU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_tF6A01FED2D28A6DEFFEFFA326BFD98C51977C935_CustomAttributesCacheGenerator_U3CLayersU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_tF6A01FED2D28A6DEFFEFFA326BFD98C51977C935_CustomAttributesCacheGenerator_AztecResultMetadata_set_Compact_mD8FC17ED3B87A9F18B78A55D936E5991D4F69976(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_tF6A01FED2D28A6DEFFEFFA326BFD98C51977C935_CustomAttributesCacheGenerator_AztecResultMetadata_set_Datablocks_m5F3F3D3C90FF8F25209FC4BAF8B5113213A1C9DF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_tF6A01FED2D28A6DEFFEFFA326BFD98C51977C935_CustomAttributesCacheGenerator_AztecResultMetadata_set_Layers_m7CC9D0FA14D60DD288B092D0E814863EF5BDD308(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_U3CCompactU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_U3CNbDatablocksU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_U3CNbLayersU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_AztecDetectorResult_get_Compact_mE5C40421B3E0523F11F8C1E5B5466756135D20EE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_AztecDetectorResult_set_Compact_mDBD4089D1203FFD8AEF68A4EE300B2112CC32EBF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_AztecDetectorResult_get_NbDatablocks_m40F7C8D3CEAB1770667576FE403C7D4F44246FBB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_AztecDetectorResult_set_NbDatablocks_m77C704A83FB21B2D51AA161AB0E2B33AEE4D0CB8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_AztecDetectorResult_get_NbLayers_m80EA2A15410D4DFC90BA8E846BC555550DF403E3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_AztecDetectorResult_set_NbLayers_mB3B445ABB3FEEE735900FCE79DE2EF62EC4177C2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Point_tDB56E17624609834583DF42CDAF5FA7313338064_CustomAttributesCacheGenerator_U3CXU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Point_tDB56E17624609834583DF42CDAF5FA7313338064_CustomAttributesCacheGenerator_U3CYU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Point_tDB56E17624609834583DF42CDAF5FA7313338064_CustomAttributesCacheGenerator_Point_get_X_m9700D955B3AC9A16A601E5EBCE84F2070425FE26(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Point_tDB56E17624609834583DF42CDAF5FA7313338064_CustomAttributesCacheGenerator_Point_set_X_mB0ACCFA3160819030D01DACB3EF6ADE76E1394AD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Point_tDB56E17624609834583DF42CDAF5FA7313338064_CustomAttributesCacheGenerator_Point_get_Y_mF364487B63CCA1C3FBE2220B1FECA6EFD65FB6F6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Point_tDB56E17624609834583DF42CDAF5FA7313338064_CustomAttributesCacheGenerator_Point_set_Y_mDE822559D6D7AAE0E88111D6214BD1F50023FB8D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_tD2BF0AE661D5F68B617240E6FDB1A5DA696D2A47_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_zxing_unity_AttributeGenerators[];
const CustomAttributesCacheGenerator g_zxing_unity_AttributeGenerators[275] = 
{
	DigitContainer_t8D66F0B6F879AC64D6079341E45462A3E69429E9_CustomAttributesCacheGenerator,
	DigitContainer_t7B54A6DC1B01A0D689F978E020AAB984A48D6ECD_CustomAttributesCacheGenerator,
	BarcodeFormat_t96B0D16A5DAF539152437C2BEDDA70E362B52B65_CustomAttributesCacheGenerator,
	BarcodeReader_tA5699011374427549C51833EE22EF6E29F873B4E_CustomAttributesCacheGenerator,
	U3CU3Ec_t7E894CF991B91AFAC15E4B2A9774563754D8B960_CustomAttributesCacheGenerator,
	U3CU3Ec_tBCA96404D1043225918E4ADB3EBC541D39EC6A23_CustomAttributesCacheGenerator,
	U3CU3Ec_t2ADEC2A22E0CE599D00D7E4E629E5FDF8049AC5A_CustomAttributesCacheGenerator,
	BitArray_tF3FB203DE28D45A37BD8E64A737BB7D590769AC0_CustomAttributesCacheGenerator,
	BitMatrix_t86445EA5C452C5EA41B2C1A0C83310A20A13FB4E_CustomAttributesCacheGenerator,
	ChangeNotifyDictionary_2_t7A4998CFD086FD3B0E054ABA329E150035CAFDD8_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_tD2BF0AE661D5F68B617240E6FDB1A5DA696D2A47_CustomAttributesCacheGenerator,
	BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_explicitResultPointFound,
	BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_ResultFound,
	BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_U3CAutoRotateU3Ek__BackingField,
	BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_U3CTryInvertedU3Ek__BackingField,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CTextU3Ek__BackingField,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CRawBytesU3Ek__BackingField,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CResultPointsU3Ek__BackingField,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CBarcodeFormatU3Ek__BackingField,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CResultMetadataU3Ek__BackingField,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CTimestampU3Ek__BackingField,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_U3CNumBitsU3Ek__BackingField,
	Mode_tC8E92AEE7DB1FCCCAA5C26ECFAF7B4FBA8C6355F_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField,
	Mode_tC8E92AEE7DB1FCCCAA5C26ECFAF7B4FBA8C6355F_CustomAttributesCacheGenerator_U3CBitsU3Ek__BackingField,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CSegmentIndexU3Ek__BackingField,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CFileIdU3Ek__BackingField,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CIsLastSegmentU3Ek__BackingField,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CSegmentCountU3Ek__BackingField,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CSenderU3Ek__BackingField,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CAddresseeU3Ek__BackingField,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CFileNameU3Ek__BackingField,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CFileSizeU3Ek__BackingField,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CChecksumU3Ek__BackingField,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_U3CTimestampU3Ek__BackingField,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_U3CColumnCountU3Ek__BackingField,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_U3CErrorCorrectionLevelU3Ek__BackingField,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_U3CRowCountUpperU3Ek__BackingField,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_U3CRowCountLowerU3Ek__BackingField,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_U3CRowCountU3Ek__BackingField,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CTopLeftU3Ek__BackingField,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CTopRightU3Ek__BackingField,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CBottomLeftU3Ek__BackingField,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CBottomRightU3Ek__BackingField,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CMinXU3Ek__BackingField,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CMaxXU3Ek__BackingField,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CMinYU3Ek__BackingField,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_U3CMaxYU3Ek__BackingField,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_U3CStartXU3Ek__BackingField,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_U3CEndXU3Ek__BackingField,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_U3CBucketU3Ek__BackingField,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_U3CRowNumberU3Ek__BackingField,
	DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_U3CMetadataU3Ek__BackingField,
	DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_U3CDetectionResultColumnsU3Ek__BackingField,
	DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_U3CBoxU3Ek__BackingField,
	DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_U3CColumnCountU3Ek__BackingField,
	DetectionResultColumn_t1832CDC43801BBC411F494A161B46335CE1A0BB8_CustomAttributesCacheGenerator_U3CBoxU3Ek__BackingField,
	DetectionResultColumn_t1832CDC43801BBC411F494A161B46335CE1A0BB8_CustomAttributesCacheGenerator_U3CCodewordsU3Ek__BackingField,
	DetectionResultRowIndicatorColumn_t3EC909EB1B297125FBEA40ACB6976707E6388D91_CustomAttributesCacheGenerator_U3CIsLeftU3Ek__BackingField,
	PDF417DetectorResult_t100A9C82B053BFE7669F95BDDF8F04EE60745447_CustomAttributesCacheGenerator_U3CBitsU3Ek__BackingField,
	PDF417DetectorResult_t100A9C82B053BFE7669F95BDDF8F04EE60745447_CustomAttributesCacheGenerator_U3CPointsU3Ek__BackingField,
	ModulusGF_tC997B462E48F703F8E0CEF6B6F99F86C1B12DF44_CustomAttributesCacheGenerator_U3CZeroU3Ek__BackingField,
	ModulusGF_tC997B462E48F703F8E0CEF6B6F99F86C1B12DF44_CustomAttributesCacheGenerator_U3COneU3Ek__BackingField,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_U3CColorU3Ek__BackingField,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_U3CLengthU3Ek__BackingField,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_U3CSimilarU3Ek__BackingField,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_U3CSmallU3Ek__BackingField,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_U3CLargeU3Ek__BackingField,
	DataCharacter_tD3F81CF7CEA1FF4BA70FDC519874451AAF000F1C_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField,
	DataCharacter_tD3F81CF7CEA1FF4BA70FDC519874451AAF000F1C_CustomAttributesCacheGenerator_U3CChecksumPortionU3Ek__BackingField,
	FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField,
	FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_U3CStartEndU3Ek__BackingField,
	FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_U3CResultPointsU3Ek__BackingField,
	Pair_tAE176E94A7008A08DA51BA12CCA6274B9D1FE8A0_CustomAttributesCacheGenerator_U3CFinderPatternU3Ek__BackingField,
	Pair_tAE176E94A7008A08DA51BA12CCA6274B9D1FE8A0_CustomAttributesCacheGenerator_U3CCountU3Ek__BackingField,
	ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_U3CLeftCharU3Ek__BackingField,
	ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_U3CRightCharU3Ek__BackingField,
	ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_U3CFinderPatternU3Ek__BackingField,
	ExpandedRow_t62007500341A39A091E609521B6AA441A72DBB44_CustomAttributesCacheGenerator_U3CPairsU3Ek__BackingField,
	ExpandedRow_t62007500341A39A091E609521B6AA441A72DBB44_CustomAttributesCacheGenerator_U3CRowNumberU3Ek__BackingField,
	DecodedObject_t395D0EB8FF87D37B25FECB691FE9B6F27371C6D1_CustomAttributesCacheGenerator_U3CNewPositionU3Ek__BackingField,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CRawBytesU3Ek__BackingField,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CNumBitsU3Ek__BackingField,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CTextU3Ek__BackingField,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CByteSegmentsU3Ek__BackingField,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CECLevelU3Ek__BackingField,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CErrorsCorrectedU3Ek__BackingField,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CStructuredAppendSequenceNumberU3Ek__BackingField,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CErasuresU3Ek__BackingField,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3CStructuredAppendParityU3Ek__BackingField,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_U3COtherU3Ek__BackingField,
	DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_U3CHintsU3Ek__BackingField,
	DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_ValueChanged,
	ChangeNotifyDictionary_2_t7A4998CFD086FD3B0E054ABA329E150035CAFDD8_CustomAttributesCacheGenerator_ValueChanged,
	DetectorResult_tB1B6DE64866E772B0A58E6873264598E60D5681D_CustomAttributesCacheGenerator_U3CBitsU3Ek__BackingField,
	DetectorResult_tB1B6DE64866E772B0A58E6873264598E60D5681D_CustomAttributesCacheGenerator_U3CPointsU3Ek__BackingField,
	ECI_t153DD0698C4E45107F5A05EB6D35CC3F05D50247_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField,
	AztecResultMetadata_tF6A01FED2D28A6DEFFEFFA326BFD98C51977C935_CustomAttributesCacheGenerator_U3CCompactU3Ek__BackingField,
	AztecResultMetadata_tF6A01FED2D28A6DEFFEFFA326BFD98C51977C935_CustomAttributesCacheGenerator_U3CDatablocksU3Ek__BackingField,
	AztecResultMetadata_tF6A01FED2D28A6DEFFEFFA326BFD98C51977C935_CustomAttributesCacheGenerator_U3CLayersU3Ek__BackingField,
	AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_U3CCompactU3Ek__BackingField,
	AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_U3CNbDatablocksU3Ek__BackingField,
	AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_U3CNbLayersU3Ek__BackingField,
	Point_tDB56E17624609834583DF42CDAF5FA7313338064_CustomAttributesCacheGenerator_U3CXU3Ek__BackingField,
	Point_tDB56E17624609834583DF42CDAF5FA7313338064_CustomAttributesCacheGenerator_U3CYU3Ek__BackingField,
	BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_BarcodeReaderGeneric_get_AutoRotate_m8E015DC7E354D143E70502BDDD67100E0525C96B,
	BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_BarcodeReaderGeneric_get_TryInverted_m6E9CB5FFAC9673A4548A369685B445F355B03DC9,
	BarcodeReaderGeneric_tC0348DF9C328DB47C11793FE2080D2541902BD92_CustomAttributesCacheGenerator_BarcodeReaderGeneric_U3Cget_OptionsU3Eb__8_0_m521B3AEDAFFD5196FCBE51F66F8CD012313ED666,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_get_Text_m32E0659D67493CF7D9FDDBD440490C152C698F06,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_Text_mD8C2265F928B33A9A8DCD583BA170FC4FE3C58F5,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_get_RawBytes_m7A22F5595F78E255719351391CB3D67D2344811A,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_RawBytes_m75E4D8B5FC0E37F81D09406877FEC72E716333A6,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_get_ResultPoints_m75EC06733675ABD87A6CC32CEF388296BDF54315,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_ResultPoints_m19AD293A0D2336B845BBC9F8348681436BE51D2E,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_get_BarcodeFormat_m0B8E8252ECF56E2C1CFDB8573925B32E80E8D93A,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_BarcodeFormat_mFD5D5E783825C15B67F25B1F5D5DA32808719F42,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_get_ResultMetadata_m741CBF666B0AFA862063A5100631C4086E4A8366,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_ResultMetadata_m9588FDB4FD0645FED24442312D6C08EA687EDFC6,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_Timestamp_m5AAC86B0DD3E4E0147933DDCFCC299F6B6BC1446,
	Result_t80A0868DCC6BE970405D110D50E60CD639E8AD62_CustomAttributesCacheGenerator_Result_set_NumBits_mFB16F9D1675A8A56DF7E9BED417ACE65B0CDB8D3,
	Color32LuminanceSource_t4F7B4838CE4E0A338BABEA68D76E4F4BDAA69297_CustomAttributesCacheGenerator_Color32LuminanceSource__ctor_m417FFD9561B4D3A438E852D44E5E7C08FADE230F,
	Color32LuminanceSource_t4F7B4838CE4E0A338BABEA68D76E4F4BDAA69297_CustomAttributesCacheGenerator_Color32LuminanceSource_SetPixels_m35D5844FC05A8037A22305CB8E69827C354E2EBA,
	Mode_tC8E92AEE7DB1FCCCAA5C26ECFAF7B4FBA8C6355F_CustomAttributesCacheGenerator_Mode_get_Name_m60E9150A2564C8EFB4ACCACBBCFA10ADCDC93518,
	Mode_tC8E92AEE7DB1FCCCAA5C26ECFAF7B4FBA8C6355F_CustomAttributesCacheGenerator_Mode_set_Name_m4EFA54EA8FB97B1CEB2C571313CC86581B8E9E4E,
	Mode_tC8E92AEE7DB1FCCCAA5C26ECFAF7B4FBA8C6355F_CustomAttributesCacheGenerator_Mode_set_Bits_m434921FA04B571E87809A77377D8FC833ED48E2E,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_SegmentIndex_m88367E2ABBEA3907146857EA81D3DF52829A1E9E,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_FileId_m99F5D426BFFC54D6CE04F332D82557BDF8103781,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_IsLastSegment_m9D37E6D389FFEF7FFC6E3900BCEDDEAF74167C97,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_SegmentCount_mEDC62293A71C71E6B7A6546B8458817C4E4095B9,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Sender_m3B2E3B0DB9E161BCA4086A2874E09A6A93EE5BDD,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Addressee_m9B77B18A9285D1E89939DD2400D37D27E01E2009,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_FileName_m05110D5FA984CFA1FCB459BB68B2CC90DCC10B1D,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_FileSize_m94E34C3660D50E409B9BAFEDCD11148ACCF360E9,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Checksum_m89CAF8092D351BCC3C5201391CE17996CF21C86B,
	PDF417ResultMetadata_t6E11BF13074033E441AEE2F16A11CC7807D689A3_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Timestamp_mB8A19B18B9885C4031F6E5F43E1306C63CBBB2FF,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_get_ColumnCount_m66116B819727D3C6DD263C009307D738144FF213,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_set_ColumnCount_m5D169BCC303CC34763D4930BA8248FFA02F45302,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_get_ErrorCorrectionLevel_m59E9341C122588CC5BB102449F2C2C4216CD69B5,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_set_ErrorCorrectionLevel_m05BF6313858B067D83E9191AEB1E7489DE13FBDA,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_get_RowCountUpper_m97DC41196C854874F7BFA88011DBB8661F056902,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_set_RowCountUpper_m59A92F63E0D5BF3ED32706EF1742D278BCD60F4E,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_get_RowCountLower_mC0C5F2E1C8A5C8A5B15B93774FD3F1CF6C075A14,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_set_RowCountLower_m9E1C514AC5A0E71FB2F8FECE048962309C1B20D1,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_get_RowCount_mBBBED731F988E702156501B86B840F1CC30B56C5,
	BarcodeMetadata_t8A935680135F2928D974F61DE4662E8B36285E60_CustomAttributesCacheGenerator_BarcodeMetadata_set_RowCount_m2DD347FBB1AB8C8E508AFA9B298A22BEAD776D59,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_TopLeft_m5FCA9A45B2A1DA35DB3A371696E7CDEC4B2B90CA,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_TopLeft_mF40A7EA75597E429128DB8C257644C76FBF957C8,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_TopRight_m87A0239397C37B336B0D11AECBDCF890EF6BCA01,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_TopRight_m7134D1193E6DED8924B81E37112CEFF090D85D9D,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_BottomLeft_m80E0172008361F09E66F71E62BDD2B01F7DC616E,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_BottomLeft_mDFF7B8CC362F6FE2A6C2D11E75B2FC0011C5DB41,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_BottomRight_mA3C15CF08D520CD14A26B722748A06362EAE97A3,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_BottomRight_mA3543D0CEB31756C25DC011EF6BE83036853E9EB,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_MinX_mE6E01C95DDBF914C25AFA4F23F04AC5736D809C8,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_MinX_m1926B5A87708ED857CF70B3D2E0C664E14FC81E9,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_MaxX_mF8210A6BDE04D056A7E0DBF250490D2E7AAB0BB3,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_MaxX_m5132BB87F82ACA7032BDF94E4EEE3C0DD25E0C31,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_MinY_m8B203963E36267CE7A9E1CEA6CD8A632E41DD7C2,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_MinY_mC6561381436AD2010E440166A060964065A2FCE5,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_get_MaxY_m86E254D21FFF9BBDA87913890C5D13AAF592C4DE,
	BoundingBox_t00FBF5CCA1F1AA7456296471C0A06A6265F930B5_CustomAttributesCacheGenerator_BoundingBox_set_MaxY_mE93481DF7A828558CA38869E83368EAB770FE8B7,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_get_StartX_m3628872876C9330100931D3EFA610D4C8AA70797,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_set_StartX_mD214D45F87DBF288B1998C00AE7E19C5E01D5CD2,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_get_EndX_m6A8E77E64636571156F2001257ED31B6141ACB23,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_set_EndX_mEF6753B951E545476057F29442BA4BFB51DC487E,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_get_Bucket_m082927A5062ED85C71B23D2D103DBE07D3F0CF42,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_set_Bucket_m5F203DCF40FDB9EE782C5DFDC545AB144D7881BB,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_get_Value_m925794C583F49E917BAB5124A78F5ED0B95FAB52,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_set_Value_m3200FCC6B4FBD0C77C9CF220A03BB1C20C94E6D9,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_get_RowNumber_mA595A0B7BDBEF5884FD44728B657798D528D98F0,
	Codeword_tEC483CAB03094BE7B316387CC44D60781A53B079_CustomAttributesCacheGenerator_Codeword_set_RowNumber_m49EE9B3DB035DF5BAE491C01E9DDCCF7BF973D71,
	DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_get_Metadata_mF1464F27BCB7262F74F959ED2A2E0F9CA7CD44E1,
	DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_set_Metadata_m516A58BBF0043F37DF279F5D816533009205C5DB,
	DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_get_DetectionResultColumns_m60F4ADC1D96C0635B337425A1757452808527B51,
	DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_set_DetectionResultColumns_mB93FC0826B1B557E0DD951E992F3B9133E3FFD54,
	DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_get_Box_m66A67ED5936F9569B99480E2ECEF3CACC0090017,
	DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_set_Box_m9B4AF3CD39CA5B5D5EE5B09AB6A5D67CC0DD77E0,
	DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_get_ColumnCount_m6244C4FD50D00D23620159EF05DC657E8C67DED1,
	DetectionResult_t47B5498224E73D07E5D5A57A227779AFFEE4D968_CustomAttributesCacheGenerator_DetectionResult_set_ColumnCount_m55F20CEE1D60DDE4B0567CA71CA4C4E689276F74,
	DetectionResultColumn_t1832CDC43801BBC411F494A161B46335CE1A0BB8_CustomAttributesCacheGenerator_DetectionResultColumn_get_Box_mCAD9587E50906A2C6C39EAAC59CBDDCB76654B50,
	DetectionResultColumn_t1832CDC43801BBC411F494A161B46335CE1A0BB8_CustomAttributesCacheGenerator_DetectionResultColumn_set_Box_m4B1BD8A21434E232D163F0321C25CB2553613DD0,
	DetectionResultColumn_t1832CDC43801BBC411F494A161B46335CE1A0BB8_CustomAttributesCacheGenerator_DetectionResultColumn_get_Codewords_mB48368EC7A5F89A977B24D5A0037F6E9B5829B39,
	DetectionResultColumn_t1832CDC43801BBC411F494A161B46335CE1A0BB8_CustomAttributesCacheGenerator_DetectionResultColumn_set_Codewords_mCE3169D6F1D653E6CE69FB3D5EC75D6A3AB14588,
	DetectionResultRowIndicatorColumn_t3EC909EB1B297125FBEA40ACB6976707E6388D91_CustomAttributesCacheGenerator_DetectionResultRowIndicatorColumn_get_IsLeft_mBE0FDC73698BC6A5FCFFB6BBD579E533906FDD1D,
	DetectionResultRowIndicatorColumn_t3EC909EB1B297125FBEA40ACB6976707E6388D91_CustomAttributesCacheGenerator_DetectionResultRowIndicatorColumn_set_IsLeft_mDE898E63A52CC200D64E7677DCAFA8E455235FD2,
	PDF417DetectorResult_t100A9C82B053BFE7669F95BDDF8F04EE60745447_CustomAttributesCacheGenerator_PDF417DetectorResult_get_Bits_m6D65906AA0136F682CA5415FDD544D8A33BE283B,
	PDF417DetectorResult_t100A9C82B053BFE7669F95BDDF8F04EE60745447_CustomAttributesCacheGenerator_PDF417DetectorResult_set_Bits_m09AC798E68DB40AAD4C4F016871E13E1710206EA,
	PDF417DetectorResult_t100A9C82B053BFE7669F95BDDF8F04EE60745447_CustomAttributesCacheGenerator_PDF417DetectorResult_get_Points_m2177F8852C3985896E0196B6F5E97F876FC40FD6,
	PDF417DetectorResult_t100A9C82B053BFE7669F95BDDF8F04EE60745447_CustomAttributesCacheGenerator_PDF417DetectorResult_set_Points_mA03F76A570639AF8D862546B5A6E34E8654318C6,
	ModulusGF_tC997B462E48F703F8E0CEF6B6F99F86C1B12DF44_CustomAttributesCacheGenerator_ModulusGF_get_Zero_mE848472485073BDA4FE76FCBC8ACB9CF2483DF75,
	ModulusGF_tC997B462E48F703F8E0CEF6B6F99F86C1B12DF44_CustomAttributesCacheGenerator_ModulusGF_set_Zero_mC5CDE662A5F02D0E03918365C64D4B09807D94EE,
	ModulusGF_tC997B462E48F703F8E0CEF6B6F99F86C1B12DF44_CustomAttributesCacheGenerator_ModulusGF_get_One_mFD38F996AC748CEF116E07197BBF4A3CCA3EA13E,
	ModulusGF_tC997B462E48F703F8E0CEF6B6F99F86C1B12DF44_CustomAttributesCacheGenerator_ModulusGF_set_One_mD3B73BB62B0380A3B2D0D15792E961F3C1ECF374,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_get_Color_m9237FEB696832C0D48A914C304C3E4FC9408CDA7,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_set_Color_mBA38D26E3A603C33603E7251A96221F7C5E03CF1,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_get_Length_mF271AFD0E3BA976742D19FCD56FF0352E71867EB,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_set_Length_m8D2D22E98309CD40AF7ED11A6FF0DDCABE4773A5,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_get_Similar_m58F66FDDDCB9D410E6716DB4A1541F81219C3C61,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_set_Similar_mAF0D7F2FC87F5F3EA48CEBAC7802E5DFA1EF5B18,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_get_Small_m7ED736A27C5490669B6F75760C9E500A2D833799,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_set_Small_m950F71EF3260268A9911832A0A995C1E4464290D,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_get_Large_m2EEBDFB54F284DA5BE2BC972B94AD906659AED2A,
	PixelInterval_t0994F2FCE5D52442119A12C7FA9E96F122001D76_CustomAttributesCacheGenerator_PixelInterval_set_Large_m8F6B4FA327F0409620FB9C74D90D6AE285351110,
	DataCharacter_tD3F81CF7CEA1FF4BA70FDC519874451AAF000F1C_CustomAttributesCacheGenerator_DataCharacter_get_Value_mDB3E6C3EFAFD86B00FFBAF2C39CC8B3F706B4C79,
	DataCharacter_tD3F81CF7CEA1FF4BA70FDC519874451AAF000F1C_CustomAttributesCacheGenerator_DataCharacter_set_Value_m2A3D439C3A64D795E216D5DCD8D3B450DE056574,
	DataCharacter_tD3F81CF7CEA1FF4BA70FDC519874451AAF000F1C_CustomAttributesCacheGenerator_DataCharacter_get_ChecksumPortion_m446EDC0539E8923D1BD442A40A7C480A22E7E476,
	DataCharacter_tD3F81CF7CEA1FF4BA70FDC519874451AAF000F1C_CustomAttributesCacheGenerator_DataCharacter_set_ChecksumPortion_m3E3100C628B149F20D2CB909DEB42E190828C059,
	FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_FinderPattern_get_Value_m35C412D669847C8807A0FB1C4EF2D8326CD98BB2,
	FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_FinderPattern_set_Value_m5C50805626F0489D4FAE1E39CD5A5D3FB4700D96,
	FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_FinderPattern_get_StartEnd_m5A0882A63C3C52CCD383FB979D63EA9A1D6D5CCB,
	FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_FinderPattern_set_StartEnd_m4EDF128FA1B17FE4AB36AAA022FA997CCFF47726,
	FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_FinderPattern_get_ResultPoints_mE6B53F34B426885BC7D47FB0674249167A127329,
	FinderPattern_tE03B2DFD7EA8EEB6BA16E5D4D6B41D0B021CF19C_CustomAttributesCacheGenerator_FinderPattern_set_ResultPoints_mB633B0E3088584339F4904FA439AF12179E527DC,
	Pair_tAE176E94A7008A08DA51BA12CCA6274B9D1FE8A0_CustomAttributesCacheGenerator_Pair_get_FinderPattern_m3941AC85A7DD0643EE6828B5426119F8B74E00EB,
	Pair_tAE176E94A7008A08DA51BA12CCA6274B9D1FE8A0_CustomAttributesCacheGenerator_Pair_set_FinderPattern_m616FA0E5F7BB27BEF8B004C3199BD5EA7FCCAE2D,
	Pair_tAE176E94A7008A08DA51BA12CCA6274B9D1FE8A0_CustomAttributesCacheGenerator_Pair_get_Count_m500DC0572ABC9BE26CF002B8E3DDE8DFDBCF63EC,
	Pair_tAE176E94A7008A08DA51BA12CCA6274B9D1FE8A0_CustomAttributesCacheGenerator_Pair_set_Count_m64A5A80CBD61C105167EAD639687ED9CC08BC2DC,
	ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_ExpandedPair_get_LeftChar_m7C153768A0DDE3B0CC1462351F2F55FD32C95B83,
	ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_ExpandedPair_set_LeftChar_m19B4BCC078C318488E9DEAA8DC7CEB65BAE0F7F4,
	ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_ExpandedPair_get_RightChar_m8C61D04F8C5C7EAF1B63E0EED2BDF45678812C40,
	ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_ExpandedPair_set_RightChar_m58971AE9A0153B9D56AD140DA82B404B4CA0298A,
	ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_ExpandedPair_get_FinderPattern_mB178A43F1498388DF19D22E574479F3A613DADCF,
	ExpandedPair_t8B77CC1B2C424524F48DCADFEC13B29752EB0E29_CustomAttributesCacheGenerator_ExpandedPair_set_FinderPattern_m7FD01C688BB32DD1F7320C170433ED8CB31105BB,
	ExpandedRow_t62007500341A39A091E609521B6AA441A72DBB44_CustomAttributesCacheGenerator_ExpandedRow_get_Pairs_m05BD42A999AD1685435721F87024B818FBB90609,
	ExpandedRow_t62007500341A39A091E609521B6AA441A72DBB44_CustomAttributesCacheGenerator_ExpandedRow_set_Pairs_mB60065E279312A8AA6C63B6E34AC4A9015C3D824,
	ExpandedRow_t62007500341A39A091E609521B6AA441A72DBB44_CustomAttributesCacheGenerator_ExpandedRow_get_RowNumber_m34F144D2C16B83A701C33C180A2516244CFAC95C,
	ExpandedRow_t62007500341A39A091E609521B6AA441A72DBB44_CustomAttributesCacheGenerator_ExpandedRow_set_RowNumber_mB582D15D76AFEDB86E34D1CD64A190BCF28552C7,
	DecodedObject_t395D0EB8FF87D37B25FECB691FE9B6F27371C6D1_CustomAttributesCacheGenerator_DecodedObject_get_NewPosition_m682BE254BC5C800AD4A358971D210AE2C307A065,
	DecodedObject_t395D0EB8FF87D37B25FECB691FE9B6F27371C6D1_CustomAttributesCacheGenerator_DecodedObject_set_NewPosition_m0D5F5F1052CF689475ED69B13FFB1DC32C06149A,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_RawBytes_mDAD14E05A118511B78A8D72781DA3D96AC86D565,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_RawBytes_mF5E78C31A2D5499C2072598935B45370635705C2,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_NumBits_m95448C26B0A8D228BB70033D103EDCA8C946BEE4,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_NumBits_mE93AFA60C0F2EFACFB1524122A1EC3A6417F5363,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_Text_m187FC18A4F6F89E4F774528832434500AA07BE5C,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_Text_mA5B7739FC93735755FB4FF7F236AF2EA9EBA038D,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_ByteSegments_mA7776EACF79B8522234DFFAA83219B1630AF46B6,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_ByteSegments_m39B2AD53C2D016D4DA712FA684EE87939361B190,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_ECLevel_mC6F9F319E9BF7094B510257B08D02434003DE343,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_ECLevel_mD884E0E666AF27854255108D9E60E8818AFF54E6,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_ErrorsCorrected_m89F45C26FD48138A5B73D283F1B0B4E92E8E3E18,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_StructuredAppendSequenceNumber_m5083D3A28FB320F9B642909F87B1FE88430ECD42,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_StructuredAppendSequenceNumber_m38EE8374EB2E7F14D493EE6E13BCD92FD1A87AB4,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_Erasures_m1399143D4171C25B08F5B124B201620CBC589F29,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_StructuredAppendParity_mA12D81BEB48C05F11B0098A6BF89E553ADF25E19,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_StructuredAppendParity_m0BA402E596FCABCE78F2D8E79CD4631CA1B0FCC3,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_get_Other_m58090559656F6E8C695C9407563575F4355CB4C7,
	DecoderResult_t49526968DBAB4DCE93BE24A9C3B95924F234FECD_CustomAttributesCacheGenerator_DecoderResult_set_Other_m53B9CE5AF3EFCFD68706A847DA9C489A3674D60C,
	DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_DecodingOptions_get_Hints_m463AB21DF0F210190AC72338270A6EF718C8D3B0,
	DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_DecodingOptions_set_Hints_mB243CC2E6FFFBCA21DC86E3F6D5A84CB04EA19FE,
	DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_DecodingOptions_add_ValueChanged_m512AA9CEA7E71E2F7D5034C76791AEF88AF54540,
	DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_DecodingOptions_remove_ValueChanged_m030B7A6A1BCDEE0E7596ACB4B354D515DA3AE45A,
	DecodingOptions_t000CC133585583627CD33E1743666B93BCA27353_CustomAttributesCacheGenerator_DecodingOptions_U3C_ctorU3Eb__43_0_m96CECD03D670352EB9F539BA6B335DD5F91CAE81,
	ChangeNotifyDictionary_2_t7A4998CFD086FD3B0E054ABA329E150035CAFDD8_CustomAttributesCacheGenerator_ChangeNotifyDictionary_2_add_ValueChanged_m7AADB5C28C9F9DC4046768D8005778509B308845,
	ChangeNotifyDictionary_2_t7A4998CFD086FD3B0E054ABA329E150035CAFDD8_CustomAttributesCacheGenerator_ChangeNotifyDictionary_2_remove_ValueChanged_m0ED3DF3204B1B6FD6C130B7C4C80038AE835709B,
	DetectorResult_tB1B6DE64866E772B0A58E6873264598E60D5681D_CustomAttributesCacheGenerator_DetectorResult_get_Bits_m7E2F04F2985DD874CC71AC66CD1C950F1873E9C6,
	DetectorResult_tB1B6DE64866E772B0A58E6873264598E60D5681D_CustomAttributesCacheGenerator_DetectorResult_set_Bits_m210D93424378FEB544F382FCA9E856B056930AD9,
	DetectorResult_tB1B6DE64866E772B0A58E6873264598E60D5681D_CustomAttributesCacheGenerator_DetectorResult_get_Points_m2A763015306B7DEE388344010FFA5B0200958F64,
	DetectorResult_tB1B6DE64866E772B0A58E6873264598E60D5681D_CustomAttributesCacheGenerator_DetectorResult_set_Points_m6534D298F884BF158BA0DDBB51FB1E84F7465027,
	ECI_t153DD0698C4E45107F5A05EB6D35CC3F05D50247_CustomAttributesCacheGenerator_ECI_set_Value_m50FA56752683DC1AC05E0607A39EC5BEDEEB0178,
	AztecResultMetadata_tF6A01FED2D28A6DEFFEFFA326BFD98C51977C935_CustomAttributesCacheGenerator_AztecResultMetadata_set_Compact_mD8FC17ED3B87A9F18B78A55D936E5991D4F69976,
	AztecResultMetadata_tF6A01FED2D28A6DEFFEFFA326BFD98C51977C935_CustomAttributesCacheGenerator_AztecResultMetadata_set_Datablocks_m5F3F3D3C90FF8F25209FC4BAF8B5113213A1C9DF,
	AztecResultMetadata_tF6A01FED2D28A6DEFFEFFA326BFD98C51977C935_CustomAttributesCacheGenerator_AztecResultMetadata_set_Layers_m7CC9D0FA14D60DD288B092D0E814863EF5BDD308,
	AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_AztecDetectorResult_get_Compact_mE5C40421B3E0523F11F8C1E5B5466756135D20EE,
	AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_AztecDetectorResult_set_Compact_mDBD4089D1203FFD8AEF68A4EE300B2112CC32EBF,
	AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_AztecDetectorResult_get_NbDatablocks_m40F7C8D3CEAB1770667576FE403C7D4F44246FBB,
	AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_AztecDetectorResult_set_NbDatablocks_m77C704A83FB21B2D51AA161AB0E2B33AEE4D0CB8,
	AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_AztecDetectorResult_get_NbLayers_m80EA2A15410D4DFC90BA8E846BC555550DF403E3,
	AztecDetectorResult_tA4D64B04D0F7967F1CF7612B6A15738D18BFB2CE_CustomAttributesCacheGenerator_AztecDetectorResult_set_NbLayers_mB3B445ABB3FEEE735900FCE79DE2EF62EC4177C2,
	Point_tDB56E17624609834583DF42CDAF5FA7313338064_CustomAttributesCacheGenerator_Point_get_X_m9700D955B3AC9A16A601E5EBCE84F2070425FE26,
	Point_tDB56E17624609834583DF42CDAF5FA7313338064_CustomAttributesCacheGenerator_Point_set_X_mB0ACCFA3160819030D01DACB3EF6ADE76E1394AD,
	Point_tDB56E17624609834583DF42CDAF5FA7313338064_CustomAttributesCacheGenerator_Point_get_Y_mF364487B63CCA1C3FBE2220B1FECA6EFD65FB6F6,
	Point_tDB56E17624609834583DF42CDAF5FA7313338064_CustomAttributesCacheGenerator_Point_set_Y_mDE822559D6D7AAE0E88111D6214BD1F50023FB8D,
	Version_tC46E47BCA57ED5821100DB382386A1A57E74E4BA_CustomAttributesCacheGenerator_Version__ctor_m07CEA1C42B28CF3177A919FAF9743E767DB518F7____ecBlocks2,
	ECBlocks_tD1364BE8E77AD0F8E745BF5ECE31927CC99AF63B_CustomAttributesCacheGenerator_ECBlocks__ctor_mAD871973346EF306D20B111D8325E62A8EDE2BA9____ecBlocks1,
	zxing_unity_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
