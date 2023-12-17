#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MarshalAsAttribute)
namespace System::Runtime::InteropServices {
struct VarEnum;
}
namespace System {
class Type;
}
namespace System::Runtime::InteropServices {
struct UnmanagedType;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::MarshalAsAttribute);
// Type: System.Runtime.InteropServices::MarshalAsAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3341))
// CS Name: ::System.Runtime.InteropServices::MarshalAsAttribute*
class CORDL_TYPE MarshalAsAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Attribute)]{};

/// @brief Field MarshalCookie offset 0x10
 __declspec(property(get=__get_MarshalCookie, put=__set_MarshalCookie)) ::StringW  MarshalCookie;

/// @brief Field MarshalType offset 0x18
 __declspec(property(get=__get_MarshalType, put=__set_MarshalType)) ::StringW  MarshalType;

/// @brief Field MarshalTypeRef offset 0x20
 __declspec(property(get=__get_MarshalTypeRef, put=__set_MarshalTypeRef)) ::System::Type*  MarshalTypeRef;

/// @brief Field SafeArrayUserDefinedSubType offset 0x28
 __declspec(property(get=__get_SafeArrayUserDefinedSubType, put=__set_SafeArrayUserDefinedSubType)) ::System::Type*  SafeArrayUserDefinedSubType;

/// @brief Field utype offset 0x30
 __declspec(property(get=__get_utype, put=__set_utype)) ::System::Runtime::InteropServices::UnmanagedType  utype;

/// @brief Field ArraySubType offset 0x34
 __declspec(property(get=__get_ArraySubType, put=__set_ArraySubType)) ::System::Runtime::InteropServices::UnmanagedType  ArraySubType;

/// @brief Field SafeArraySubType offset 0x38
 __declspec(property(get=__get_SafeArraySubType, put=__set_SafeArraySubType)) ::System::Runtime::InteropServices::VarEnum  SafeArraySubType;

/// @brief Field SizeConst offset 0x3c
 __declspec(property(get=__get_SizeConst, put=__set_SizeConst)) int32_t  SizeConst;

/// @brief Field IidParameterIndex offset 0x40
 __declspec(property(get=__get_IidParameterIndex, put=__set_IidParameterIndex)) int32_t  IidParameterIndex;

/// @brief Field SizeParamIndex offset 0x44
 __declspec(property(get=__get_SizeParamIndex, put=__set_SizeParamIndex)) int16_t  SizeParamIndex;

 __declspec(property(get=get_Value)) ::System::Runtime::InteropServices::UnmanagedType  Value;

constexpr void __set_MarshalCookie(::StringW  value) ;

constexpr ::StringW& __get_MarshalCookie() ;

constexpr ::StringW const& __get_MarshalCookie() const;

constexpr void __set_MarshalType(::StringW  value) ;

constexpr ::StringW& __get_MarshalType() ;

constexpr ::StringW const& __get_MarshalType() const;

constexpr void __set_MarshalTypeRef(::System::Type*  value) ;

constexpr ::System::Type* __get_MarshalTypeRef() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_MarshalTypeRef() const;

constexpr void __set_SafeArrayUserDefinedSubType(::System::Type*  value) ;

constexpr ::System::Type* __get_SafeArrayUserDefinedSubType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_SafeArrayUserDefinedSubType() const;

constexpr void __set_utype(::System::Runtime::InteropServices::UnmanagedType  value) ;

constexpr ::System::Runtime::InteropServices::UnmanagedType& __get_utype() ;

constexpr ::System::Runtime::InteropServices::UnmanagedType const& __get_utype() const;

constexpr void __set_ArraySubType(::System::Runtime::InteropServices::UnmanagedType  value) ;

constexpr ::System::Runtime::InteropServices::UnmanagedType& __get_ArraySubType() ;

constexpr ::System::Runtime::InteropServices::UnmanagedType const& __get_ArraySubType() const;

constexpr void __set_SafeArraySubType(::System::Runtime::InteropServices::VarEnum  value) ;

constexpr ::System::Runtime::InteropServices::VarEnum& __get_SafeArraySubType() ;

constexpr ::System::Runtime::InteropServices::VarEnum const& __get_SafeArraySubType() const;

constexpr void __set_SizeConst(int32_t  value) ;

constexpr int32_t& __get_SizeConst() ;

constexpr int32_t const& __get_SizeConst() const;

constexpr void __set_IidParameterIndex(int32_t  value) ;

constexpr int32_t& __get_IidParameterIndex() ;

constexpr int32_t const& __get_IidParameterIndex() const;

constexpr void __set_SizeParamIndex(int16_t  value) ;

constexpr int16_t& __get_SizeParamIndex() ;

constexpr int16_t const& __get_SizeParamIndex() const;

static inline ::System::Runtime::InteropServices::MarshalAsAttribute* New_ctor(::System::Runtime::InteropServices::UnmanagedType  unmanagedType) ;

/// @brief Method .ctor addr 0x24da4f4 size 0x28 virtual false final false
inline void _ctor(::System::Runtime::InteropServices::UnmanagedType  unmanagedType) ;

/// @brief Method get_Value addr 0x24da51c size 0x8 virtual false final false
inline ::System::Runtime::InteropServices::UnmanagedType get_Value() ;

/// @brief Method Copy addr 0x24da524 size 0x64 virtual false final false
inline ::System::Runtime::InteropServices::MarshalAsAttribute* Copy() ;

// Ctor Parameters [CppParam { name: "", ty: "MarshalAsAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarshalAsAttribute(MarshalAsAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarshalAsAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarshalAsAttribute(MarshalAsAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MarshalAsAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::MarshalAsAttribute, 0x48>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::MarshalAsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::MarshalAsAttribute*, "System.Runtime.InteropServices", "MarshalAsAttribute");
