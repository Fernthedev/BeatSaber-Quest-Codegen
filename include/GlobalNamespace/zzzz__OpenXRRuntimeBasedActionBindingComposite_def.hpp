#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRRuntimeBasedActionBindingComposite)
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace GlobalNamespace {
class OpenXRRuntimeBasedActionBindingComposite;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite);
// Type: ::OpenXRRuntimeBasedActionBindingComposite
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6190), inst: 391 }), TypeDefinitionIndex(TypeDefinitionIndex(6190))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14437))
// CS Name: ::OpenXRRuntimeBasedActionBindingComposite*
class CORDL_TYPE OpenXRRuntimeBasedActionBindingComposite : public ::UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::InputSystem::InputBindingComposite_1<float_t>)]{};

/// @brief Field oculusRuntime offset 0x10
 __declspec(property(get=__get_oculusRuntime, put=__set_oculusRuntime)) int32_t  oculusRuntime;

/// @brief Field otherRuntimes offset 0x14
 __declspec(property(get=__get_otherRuntimes, put=__set_otherRuntimes)) int32_t  otherRuntimes;

constexpr void __set_oculusRuntime(int32_t  value) ;

constexpr int32_t& __get_oculusRuntime() ;

constexpr int32_t const& __get_oculusRuntime() const;

constexpr void __set_otherRuntimes(int32_t  value) ;

constexpr int32_t& __get_otherRuntimes() ;

constexpr int32_t const& __get_otherRuntimes() const;

/// @brief Method ReadValue addr 0x20ff28c size 0x8 virtual true final false
inline float_t ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method EvaluateMagnitude addr 0x20ff294 size 0xc virtual true final false
inline float_t EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method Init addr 0x20ff308 size 0x4 virtual false final false
static inline void Init() ;

static inline ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite* New_ctor() ;

/// @brief Method .ctor addr 0x20ff30c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntimeBasedActionBindingComposite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRRuntimeBasedActionBindingComposite(OpenXRRuntimeBasedActionBindingComposite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntimeBasedActionBindingComposite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRRuntimeBasedActionBindingComposite(OpenXRRuntimeBasedActionBindingComposite const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OpenXRRuntimeBasedActionBindingComposite()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*, "", "OpenXRRuntimeBasedActionBindingComposite");
