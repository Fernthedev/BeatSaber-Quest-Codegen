#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneInstance)
namespace System {
class Object;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance);
// Type: UnityEngine.ResourceManagement.ResourceProviders::SceneInstance
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14004))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::SceneInstance
struct CORDL_TYPE SceneInstance : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Scene offset 0x0
 __declspec(property(get=__get_m_Scene, put=__set_m_Scene)) ::UnityEngine::SceneManagement::Scene  m_Scene;

/// @brief Field m_Operation offset 0x8
 __declspec(property(get=__get_m_Operation, put=__set_m_Operation)) ::UnityEngine::AsyncOperation*  m_Operation;

 __declspec(property(get=get_Scene, put=set_Scene)) ::UnityEngine::SceneManagement::Scene  Scene;

constexpr void __set_m_Scene(::UnityEngine::SceneManagement::Scene  value) ;

constexpr ::UnityEngine::SceneManagement::Scene& __get_m_Scene() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __get_m_Scene() const;

constexpr void __set_m_Operation(::UnityEngine::AsyncOperation*  value) ;

constexpr ::UnityEngine::AsyncOperation* __get_m_Operation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> __get_m_Operation() const;

/// @brief Method get_Scene addr 0x2bd7408 size 0x8 virtual false final false
inline ::UnityEngine::SceneManagement::Scene get_Scene() ;

/// @brief Method set_Scene addr 0x2bd7410 size 0x8 virtual false final false
inline void set_Scene(::UnityEngine::SceneManagement::Scene  value) ;

/// @brief Method Activate addr 0x2bd7418 size 0x20 virtual false final false
inline void Activate() ;

/// @brief Method ActivateAsync addr 0x2bd7438 size 0x2c virtual false final false
inline ::UnityEngine::AsyncOperation* ActivateAsync() ;

/// @brief Method GetHashCode addr 0x2bd7464 size 0x20 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2bd7484 size 0xb8 virtual true final false
inline bool Equals(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "m_Scene", ty: "::UnityEngine::SceneManagement::Scene", modifiers: "", def_value: None }, CppParam { name: "m_Operation", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value: None }]
constexpr SceneInstance(::UnityEngine::SceneManagement::Scene  m_Scene, ::UnityEngine::AsyncOperation*  m_Operation) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SceneInstance(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SceneInstance()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, "UnityEngine.ResourceManagement.ResourceProviders", "SceneInstance");
