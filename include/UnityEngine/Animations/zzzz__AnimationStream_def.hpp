#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationStream)
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationStream;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationStream);
// Type: UnityEngine.Animations::AnimationStream
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14900))
// CS Name: ::UnityEngine.Animations::AnimationStream
struct CORDL_TYPE AnimationStream : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_AnimatorBindingsVersion offset 0x0
 __declspec(property(get=__get_m_AnimatorBindingsVersion, put=__set_m_AnimatorBindingsVersion)) uint32_t  m_AnimatorBindingsVersion;

/// @brief Field constant offset 0x8
 __declspec(property(get=__get_constant, put=__set_constant)) ::cordl_internals::intptr_t  constant;

/// @brief Field input offset 0x10
 __declspec(property(get=__get_input, put=__set_input)) ::cordl_internals::intptr_t  input;

/// @brief Field output offset 0x18
 __declspec(property(get=__get_output, put=__set_output)) ::cordl_internals::intptr_t  output;

/// @brief Field workspace offset 0x20
 __declspec(property(get=__get_workspace, put=__set_workspace)) ::cordl_internals::intptr_t  workspace;

/// @brief Field inputStreamAccessor offset 0x28
 __declspec(property(get=__get_inputStreamAccessor, put=__set_inputStreamAccessor)) ::cordl_internals::intptr_t  inputStreamAccessor;

/// @brief Field animationHandleBinder offset 0x30
 __declspec(property(get=__get_animationHandleBinder, put=__set_animationHandleBinder)) ::cordl_internals::intptr_t  animationHandleBinder;

constexpr void __set_m_AnimatorBindingsVersion(uint32_t  value) ;

constexpr uint32_t& __get_m_AnimatorBindingsVersion() ;

constexpr uint32_t const& __get_m_AnimatorBindingsVersion() const;

constexpr void __set_constant(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_constant() ;

constexpr ::cordl_internals::intptr_t const& __get_constant() const;

constexpr void __set_input(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_input() ;

constexpr ::cordl_internals::intptr_t const& __get_input() const;

constexpr void __set_output(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_output() ;

constexpr ::cordl_internals::intptr_t const& __get_output() const;

constexpr void __set_workspace(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_workspace() ;

constexpr ::cordl_internals::intptr_t const& __get_workspace() const;

constexpr void __set_inputStreamAccessor(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_inputStreamAccessor() ;

constexpr ::cordl_internals::intptr_t const& __get_inputStreamAccessor() const;

constexpr void __set_animationHandleBinder(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_animationHandleBinder() ;

constexpr ::cordl_internals::intptr_t const& __get_animationHandleBinder() const;

// Ctor Parameters [CppParam { name: "m_AnimatorBindingsVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "constant", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "input", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "output", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "workspace", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "inputStreamAccessor", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "animationHandleBinder", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr AnimationStream(uint32_t  m_AnimatorBindingsVersion, ::cordl_internals::intptr_t  constant, ::cordl_internals::intptr_t  input, ::cordl_internals::intptr_t  output, ::cordl_internals::intptr_t  workspace, ::cordl_internals::intptr_t  inputStreamAccessor, ::cordl_internals::intptr_t  animationHandleBinder) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AnimationStream(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AnimationStream()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationStream, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationStream, "UnityEngine.Animations", "AnimationStream");
