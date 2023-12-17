#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConfigSerializer)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class ConfigSerializer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConfigSerializer);
// Type: ::ConfigSerializer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14357))
// CS Name: ::ConfigSerializer*
class CORDL_TYPE ConfigSerializer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SaveConfig addr 0x20f141c size 0x430 virtual false final false
static inline void SaveConfig(::System::Object*  config, ::StringW  filePath) ;

/// @brief Method LoadConfig addr 0x20f184c size 0x560 virtual false final false
static inline bool LoadConfig(::System::Object*  config, ::StringW  filePath) ;

static inline ::GlobalNamespace::ConfigSerializer* New_ctor() ;

/// @brief Method .ctor addr 0x20f1dac size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ConfigSerializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigSerializer(ConfigSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigSerializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigSerializer(ConfigSerializer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConfigSerializer()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConfigSerializer, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConfigSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConfigSerializer*, "", "ConfigSerializer");
