#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonArrayAttribute)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonArrayAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonArrayAttribute);
// Type: Newtonsoft.Json::JsonArrayAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11815))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11814))
// CS Name: ::Newtonsoft.Json::JsonArrayAttribute*
class CORDL_TYPE JsonArrayAttribute : public ::Newtonsoft::Json::JsonContainerAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::Newtonsoft::Json::JsonContainerAttribute)]{};

/// @brief Field _allowNullItems offset 0x4c
 __declspec(property(get=__get__allowNullItems, put=__set__allowNullItems)) bool  _allowNullItems;

 __declspec(property(get=get_AllowNullItems, put=set_AllowNullItems)) bool  AllowNullItems;

constexpr void __set__allowNullItems(bool  value) ;

constexpr bool& __get__allowNullItems() ;

constexpr bool const& __get__allowNullItems() const;

/// @brief Method get_AllowNullItems addr 0x263efb0 size 0x8 virtual false final false
inline bool get_AllowNullItems() ;

/// @brief Method set_AllowNullItems addr 0x263efb8 size 0xc virtual false final false
inline void set_AllowNullItems(bool  value) ;

static inline ::Newtonsoft::Json::JsonArrayAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x263efc4 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::JsonArrayAttribute* New_ctor(bool  allowNullItems) ;

/// @brief Method .ctor addr 0x263efcc size 0x28 virtual false final false
inline void _ctor(bool  allowNullItems) ;

static inline ::Newtonsoft::Json::JsonArrayAttribute* New_ctor(::StringW  id) ;

/// @brief Method .ctor addr 0x263eff4 size 0x28 virtual false final false
inline void _ctor(::StringW  id) ;

// Ctor Parameters [CppParam { name: "", ty: "JsonArrayAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonArrayAttribute(JsonArrayAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonArrayAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonArrayAttribute(JsonArrayAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JsonArrayAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonArrayAttribute, 0x50>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonArrayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonArrayAttribute*, "Newtonsoft.Json", "JsonArrayAttribute");
