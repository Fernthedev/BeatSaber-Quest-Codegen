#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonSettings)
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class JsonSettings;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::JsonSettings);
// Type: BGLib.UnityExtension::JsonSettings
namespace BGLib::UnityExtension {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15880))
// CS Name: ::BGLib.UnityExtension::JsonSettings*
class CORDL_TYPE JsonSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_compactNoDefault(::Newtonsoft::Json::JsonSerializerSettings*  value) ;

static inline ::Newtonsoft::Json::JsonSerializerSettings* getStaticF_compactNoDefault() ;

static inline void setStaticF_readableWithDefault(::Newtonsoft::Json::JsonSerializerSettings*  value) ;

static inline ::Newtonsoft::Json::JsonSerializerSettings* getStaticF_readableWithDefault() ;

// Ctor Parameters [CppParam { name: "", ty: "JsonSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonSettings(JsonSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonSettings(JsonSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JsonSettings()  = default;
public:


// Fields

// Static field compactNoDefault

// Static field readableWithDefault


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::JsonSettings, 0x10>, "Size mismatch!");

} // namespace end def BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::JsonSettings);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::JsonSettings*, "BGLib.UnityExtension", "JsonSettings");
