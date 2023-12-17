#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Converter)
namespace System {
class Array;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class Converter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::Converter);
// Type: System.Runtime.Serialization.Formatters.Binary::Converter
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3277))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::Converter*
class CORDL_TYPE Converter : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_primitiveTypeEnumLength(int32_t  value) ;

static inline int32_t getStaticF_primitiveTypeEnumLength() ;

static inline void setStaticF_typeA(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value) ;

static inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> getStaticF_typeA() ;

static inline void setStaticF_arrayTypeA(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value) ;

static inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> getStaticF_arrayTypeA() ;

static inline void setStaticF_valueA(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_valueA() ;

static inline void setStaticF_typeCodeA(::ArrayW<::System::TypeCode,::Array<::System::TypeCode>*>  value) ;

static inline ::ArrayW<::System::TypeCode,::Array<::System::TypeCode>*> getStaticF_typeCodeA() ;

static inline void setStaticF_codeA(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE,::Array<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>*>  value) ;

static inline ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE,::Array<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>*> getStaticF_codeA() ;

static inline void setStaticF_typeofISerializable(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofISerializable() ;

static inline void setStaticF_typeofString(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofString() ;

static inline void setStaticF_typeofConverter(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofConverter() ;

static inline void setStaticF_typeofBoolean(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofBoolean() ;

static inline void setStaticF_typeofByte(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofByte() ;

static inline void setStaticF_typeofChar(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofChar() ;

static inline void setStaticF_typeofDecimal(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofDecimal() ;

static inline void setStaticF_typeofDouble(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofDouble() ;

static inline void setStaticF_typeofInt16(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofInt16() ;

static inline void setStaticF_typeofInt32(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofInt32() ;

static inline void setStaticF_typeofInt64(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofInt64() ;

static inline void setStaticF_typeofSByte(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofSByte() ;

static inline void setStaticF_typeofSingle(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofSingle() ;

static inline void setStaticF_typeofTimeSpan(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofTimeSpan() ;

static inline void setStaticF_typeofDateTime(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofDateTime() ;

static inline void setStaticF_typeofUInt16(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofUInt16() ;

static inline void setStaticF_typeofUInt32(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofUInt32() ;

static inline void setStaticF_typeofUInt64(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofUInt64() ;

static inline void setStaticF_typeofObject(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofObject() ;

static inline void setStaticF_typeofSystemVoid(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofSystemVoid() ;

static inline void setStaticF_urtAssembly(::System::Reflection::Assembly*  value) ;

static inline ::System::Reflection::Assembly* getStaticF_urtAssembly() ;

static inline void setStaticF_urtAssemblyString(::StringW  value) ;

static inline ::StringW getStaticF_urtAssemblyString() ;

static inline void setStaticF_typeofTypeArray(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofTypeArray() ;

static inline void setStaticF_typeofObjectArray(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofObjectArray() ;

static inline void setStaticF_typeofStringArray(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofStringArray() ;

static inline void setStaticF_typeofBooleanArray(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofBooleanArray() ;

static inline void setStaticF_typeofByteArray(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofByteArray() ;

static inline void setStaticF_typeofCharArray(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofCharArray() ;

static inline void setStaticF_typeofDecimalArray(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofDecimalArray() ;

static inline void setStaticF_typeofDoubleArray(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofDoubleArray() ;

static inline void setStaticF_typeofInt16Array(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofInt16Array() ;

static inline void setStaticF_typeofInt32Array(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofInt32Array() ;

static inline void setStaticF_typeofInt64Array(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofInt64Array() ;

static inline void setStaticF_typeofSByteArray(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofSByteArray() ;

static inline void setStaticF_typeofSingleArray(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofSingleArray() ;

static inline void setStaticF_typeofTimeSpanArray(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofTimeSpanArray() ;

static inline void setStaticF_typeofDateTimeArray(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofDateTimeArray() ;

static inline void setStaticF_typeofUInt16Array(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofUInt16Array() ;

static inline void setStaticF_typeofUInt32Array(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofUInt32Array() ;

static inline void setStaticF_typeofUInt64Array(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofUInt64Array() ;

static inline void setStaticF_typeofMarshalByRefObject(::System::Type*  value) ;

static inline ::System::Type* getStaticF_typeofMarshalByRefObject() ;

/// @brief Method ToCode addr 0x24c06b4 size 0x124 virtual false final false
static inline ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(::System::Type*  type) ;

/// @brief Method IsWriteAsByteArray addr 0x24c4420 size 0x24 virtual false final false
static inline bool IsWriteAsByteArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  code) ;

/// @brief Method TypeLength addr 0x24c4444 size 0x24 virtual false final false
static inline int32_t TypeLength(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  code) ;

/// @brief Method ToArrayType addr 0x24c109c size 0xb8 virtual false final false
static inline ::System::Type* ToArrayType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  code) ;

/// @brief Method InitTypeA addr 0x24c4820 size 0x3b8 virtual false final false
static inline void InitTypeA() ;

/// @brief Method InitArrayTypeA addr 0x24c4468 size 0x3b8 virtual false final false
static inline void InitArrayTypeA() ;

/// @brief Method ToType addr 0x24c0fe4 size 0xb8 virtual false final false
static inline ::System::Type* ToType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  code) ;

/// @brief Method CreatePrimitiveArray addr 0x24c4bd8 size 0x120 virtual false final false
static inline ::System::Array* CreatePrimitiveArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  code, int32_t  length) ;

/// @brief Method IsPrimitiveArray addr 0x24c0204 size 0x290 virtual false final false
static inline bool IsPrimitiveArray(::System::Type*  type, ByRef<::System::Object*>  typeInformation) ;

/// @brief Method InitValueA addr 0x24c4cf8 size 0x46c virtual false final false
static inline void InitValueA() ;

/// @brief Method ToComType addr 0x24c0f2c size 0xb8 virtual false final false
static inline ::StringW ToComType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  code) ;

/// @brief Method InitTypeCodeA addr 0x24c5164 size 0x194 virtual false final false
static inline void InitTypeCodeA() ;

/// @brief Method ToTypeCode addr 0x24c52f8 size 0xb8 virtual false final false
static inline ::System::TypeCode ToTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  code) ;

/// @brief Method InitCodeA addr 0x24c53b0 size 0x1a8 virtual false final false
static inline void InitCodeA() ;

/// @brief Method ToPrimitiveTypeEnum addr 0x24c4368 size 0xb8 virtual false final false
static inline ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToPrimitiveTypeEnum(::System::TypeCode  typeCode) ;

/// @brief Method FromString addr 0x24c5558 size 0xec virtual false final false
static inline ::System::Object* FromString(::StringW  value, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  code) ;

// Ctor Parameters [CppParam { name: "", ty: "Converter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Converter(Converter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Converter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Converter(Converter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Converter()  = default;
public:


// Fields

// Static field primitiveTypeEnumLength

// Static field typeA

// Static field arrayTypeA

// Static field valueA

// Static field typeCodeA

// Static field codeA

// Static field typeofISerializable

// Static field typeofString

// Static field typeofConverter

// Static field typeofBoolean

// Static field typeofByte

// Static field typeofChar

// Static field typeofDecimal

// Static field typeofDouble

// Static field typeofInt16

// Static field typeofInt32

// Static field typeofInt64

// Static field typeofSByte

// Static field typeofSingle

// Static field typeofTimeSpan

// Static field typeofDateTime

// Static field typeofUInt16

// Static field typeofUInt32

// Static field typeofUInt64

// Static field typeofObject

// Static field typeofSystemVoid

// Static field urtAssembly

// Static field urtAssemblyString

// Static field typeofTypeArray

// Static field typeofObjectArray

// Static field typeofStringArray

// Static field typeofBooleanArray

// Static field typeofByteArray

// Static field typeofCharArray

// Static field typeofDecimalArray

// Static field typeofDoubleArray

// Static field typeofInt16Array

// Static field typeofInt32Array

// Static field typeofInt64Array

// Static field typeofSByteArray

// Static field typeofSingleArray

// Static field typeofTimeSpanArray

// Static field typeofDateTimeArray

// Static field typeofUInt16Array

// Static field typeofUInt32Array

// Static field typeofUInt64Array

// Static field typeofMarshalByRefObject


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::Converter, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::Converter*, "System.Runtime.Serialization.Formatters.Binary", "Converter");
