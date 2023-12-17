#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonDictionaryAttribute)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonDictionaryAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonDictionaryAttribute);
// Type: Newtonsoft.Json::JsonDictionaryAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11815))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11803))
// CS Name: ::Newtonsoft.Json::JsonDictionaryAttribute*
class CORDL_TYPE JsonDictionaryAttribute : public ::Newtonsoft::Json::JsonContainerAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::Newtonsoft::Json::JsonContainerAttribute)]{};

static inline ::Newtonsoft::Json::JsonDictionaryAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x263e3bc size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::JsonDictionaryAttribute* New_ctor(::StringW  id) ;

/// @brief Method .ctor addr 0x263e3cc size 0x28 virtual false final false
inline void _ctor(::StringW  id) ;

// Ctor Parameters [CppParam { name: "", ty: "JsonDictionaryAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonDictionaryAttribute(JsonDictionaryAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonDictionaryAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonDictionaryAttribute(JsonDictionaryAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JsonDictionaryAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonDictionaryAttribute, 0x50>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonDictionaryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonDictionaryAttribute*, "Newtonsoft.Json", "JsonDictionaryAttribute");
