#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SceneSetupData)
// Forward declare root types
namespace GlobalNamespace {
class SceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneSetupData);
// Type: ::SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15408))
// CS Name: ::SceneSetupData*
class CORDL_TYPE SceneSetupData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::GlobalNamespace::SceneSetupData* New_ctor() ;

/// @brief Method .ctor addr 0xe23420 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SceneSetupData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneSetupData(SceneSetupData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneSetupData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneSetupData(SceneSetupData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SceneSetupData()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneSetupData, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneSetupData*, "", "SceneSetupData");
