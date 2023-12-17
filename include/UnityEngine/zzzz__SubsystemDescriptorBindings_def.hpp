#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubsystemDescriptorBindings)
// Forward declare root types
namespace UnityEngine {
class SubsystemDescriptorBindings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemDescriptorBindings);
// Type: UnityEngine::SubsystemDescriptorBindings
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15961))
// CS Name: ::UnityEngine::SubsystemDescriptorBindings*
class CORDL_TYPE SubsystemDescriptorBindings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Create addr 0x2d1a198 size 0x3c virtual false final false
static inline ::cordl_internals::intptr_t Create(::cordl_internals::intptr_t  descriptorPtr) ;

/// @brief Method GetId addr 0x2d1a148 size 0x3c virtual false final false
static inline ::StringW GetId(::cordl_internals::intptr_t  descriptorPtr) ;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorBindings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubsystemDescriptorBindings(SubsystemDescriptorBindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorBindings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubsystemDescriptorBindings(SubsystemDescriptorBindings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubsystemDescriptorBindings()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemDescriptorBindings, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SubsystemDescriptorBindings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemDescriptorBindings*, "UnityEngine", "SubsystemDescriptorBindings");
