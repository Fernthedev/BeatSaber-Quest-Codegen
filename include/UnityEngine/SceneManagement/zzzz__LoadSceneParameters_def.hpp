#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LoadSceneParameters)
namespace UnityEngine::SceneManagement {
struct LocalPhysicsMode;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::LoadSceneParameters);
// Type: UnityEngine.SceneManagement::LoadSceneParameters
namespace UnityEngine::SceneManagement {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10377))
// CS Name: ::UnityEngine.SceneManagement::LoadSceneParameters
struct CORDL_TYPE LoadSceneParameters : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_LoadSceneMode offset 0x0
 __declspec(property(get=__get_m_LoadSceneMode, put=__set_m_LoadSceneMode)) ::UnityEngine::SceneManagement::LoadSceneMode  m_LoadSceneMode;

/// @brief Field m_LocalPhysicsMode offset 0x4
 __declspec(property(get=__get_m_LocalPhysicsMode, put=__set_m_LocalPhysicsMode)) ::UnityEngine::SceneManagement::LocalPhysicsMode  m_LocalPhysicsMode;

 __declspec(property(put=set_loadSceneMode)) ::UnityEngine::SceneManagement::LoadSceneMode  loadSceneMode;

constexpr void __set_m_LoadSceneMode(::UnityEngine::SceneManagement::LoadSceneMode  value) ;

constexpr ::UnityEngine::SceneManagement::LoadSceneMode& __get_m_LoadSceneMode() ;

constexpr ::UnityEngine::SceneManagement::LoadSceneMode const& __get_m_LoadSceneMode() const;

constexpr void __set_m_LocalPhysicsMode(::UnityEngine::SceneManagement::LocalPhysicsMode  value) ;

constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode& __get_m_LocalPhysicsMode() ;

constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode const& __get_m_LocalPhysicsMode() const;

/// @brief Method set_loadSceneMode addr 0x2cef280 size 0x8 virtual false final false
inline void set_loadSceneMode(::UnityEngine::SceneManagement::LoadSceneMode  value) ;

/// @brief Method .ctor addr 0x2cef288 size 0x8 virtual false final false
inline void _ctor(::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

// Ctor Parameters [CppParam { name: "m_LoadSceneMode", ty: "::UnityEngine::SceneManagement::LoadSceneMode", modifiers: "", def_value: None }, CppParam { name: "m_LocalPhysicsMode", ty: "::UnityEngine::SceneManagement::LocalPhysicsMode", modifiers: "", def_value: None }]
constexpr LoadSceneParameters(::UnityEngine::SceneManagement::LoadSceneMode  m_LoadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode  m_LocalPhysicsMode) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LoadSceneParameters(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LoadSceneParameters()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::LoadSceneParameters, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::SceneManagement
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::LoadSceneParameters, "UnityEngine.SceneManagement", "LoadSceneParameters");
