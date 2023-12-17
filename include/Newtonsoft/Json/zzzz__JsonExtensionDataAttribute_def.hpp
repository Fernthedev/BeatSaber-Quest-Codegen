#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(JsonExtensionDataAttribute)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonExtensionDataAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonExtensionDataAttribute);
// Type: Newtonsoft.Json::JsonExtensionDataAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11805))
// CS Name: ::Newtonsoft.Json::JsonExtensionDataAttribute*
class CORDL_TYPE JsonExtensionDataAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <WriteData>k__BackingField offset 0x10
 __declspec(property(get=__get__WriteData_k__BackingField, put=__set__WriteData_k__BackingField)) bool  _WriteData_k__BackingField;

/// @brief Field <ReadData>k__BackingField offset 0x11
 __declspec(property(get=__get__ReadData_k__BackingField, put=__set__ReadData_k__BackingField)) bool  _ReadData_k__BackingField;

 __declspec(property(get=get_WriteData, put=set_WriteData)) bool  WriteData;

 __declspec(property(get=get_ReadData, put=set_ReadData)) bool  ReadData;

constexpr void __set__WriteData_k__BackingField(bool  value) ;

constexpr bool& __get__WriteData_k__BackingField() ;

constexpr bool const& __get__WriteData_k__BackingField() const;

constexpr void __set__ReadData_k__BackingField(bool  value) ;

constexpr bool& __get__ReadData_k__BackingField() ;

constexpr bool const& __get__ReadData_k__BackingField() const;

/// @brief Method get_WriteData addr 0x263e9a4 size 0x8 virtual false final false
inline bool get_WriteData() ;

/// @brief Method set_WriteData addr 0x263e9ac size 0xc virtual false final false
inline void set_WriteData(bool  value) ;

/// @brief Method get_ReadData addr 0x263e9b8 size 0x8 virtual false final false
inline bool get_ReadData() ;

/// @brief Method set_ReadData addr 0x263e9c0 size 0xc virtual false final false
inline void set_ReadData(bool  value) ;

static inline ::Newtonsoft::Json::JsonExtensionDataAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x263e9cc size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "JsonExtensionDataAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonExtensionDataAttribute(JsonExtensionDataAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonExtensionDataAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonExtensionDataAttribute(JsonExtensionDataAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JsonExtensionDataAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonExtensionDataAttribute, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonExtensionDataAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonExtensionDataAttribute*, "Newtonsoft.Json", "JsonExtensionDataAttribute");
