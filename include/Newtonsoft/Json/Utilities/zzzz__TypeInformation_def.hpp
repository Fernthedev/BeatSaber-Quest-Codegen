#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TypeInformation)
namespace System {
class Type;
}
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class TypeInformation;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::TypeInformation);
// Type: Newtonsoft.Json.Utilities::TypeInformation
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11871))
// CS Name: ::Newtonsoft.Json.Utilities::TypeInformation*
class CORDL_TYPE TypeInformation : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <Type>k__BackingField offset 0x10
 __declspec(property(get=__get__Type_k__BackingField, put=__set__Type_k__BackingField)) ::System::Type*  _Type_k__BackingField;

/// @brief Field <TypeCode>k__BackingField offset 0x18
 __declspec(property(get=__get__TypeCode_k__BackingField, put=__set__TypeCode_k__BackingField)) ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  _TypeCode_k__BackingField;

 __declspec(property(get=get_Type, put=set_Type)) ::System::Type*  Type;

 __declspec(property(get=get_TypeCode, put=set_TypeCode)) ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  TypeCode;

constexpr void __set__Type_k__BackingField(::System::Type*  value) ;

constexpr ::System::Type* __get__Type_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__Type_k__BackingField() const;

constexpr void __set__TypeCode_k__BackingField(::Newtonsoft::Json::Utilities::PrimitiveTypeCode  value) ;

constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode& __get__TypeCode_k__BackingField() ;

constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const& __get__TypeCode_k__BackingField() const;

/// @brief Method get_Type addr 0x265bc70 size 0x8 virtual false final false
inline ::System::Type* get_Type() ;

/// @brief Method set_Type addr 0x265bc78 size 0x8 virtual false final false
inline void set_Type(::System::Type*  value) ;

/// @brief Method get_TypeCode addr 0x265bc80 size 0x8 virtual false final false
inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode get_TypeCode() ;

/// @brief Method set_TypeCode addr 0x265bc88 size 0x8 virtual false final false
inline void set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode  value) ;

static inline ::Newtonsoft::Json::Utilities::TypeInformation* New_ctor() ;

/// @brief Method .ctor addr 0x265bc90 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeInformation(TypeInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeInformation(TypeInformation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeInformation()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::TypeInformation, 0x20>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::TypeInformation);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::TypeInformation*, "Newtonsoft.Json.Utilities", "TypeInformation");
