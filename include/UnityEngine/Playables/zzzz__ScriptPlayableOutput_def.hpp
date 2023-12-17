#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ScriptPlayableOutput)
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct ScriptPlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::ScriptPlayableOutput);
// Type: UnityEngine.Playables::ScriptPlayableOutput
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10424))
// CS Name: ::UnityEngine.Playables::ScriptPlayableOutput
struct CORDL_TYPE ScriptPlayableOutput : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle offset 0x0
 __declspec(property(get=__get_m_Handle, put=__set_m_Handle)) ::UnityEngine::Playables::PlayableOutputHandle  m_Handle;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr operator  ::UnityEngine::Playables::IPlayableOutput*() ;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableOutputHandle  value) ;

constexpr ::UnityEngine::Playables::PlayableOutputHandle& __get_m_Handle() ;

constexpr ::UnityEngine::Playables::PlayableOutputHandle const& __get_m_Handle() const;

/// @brief Method Create addr 0x2cf59f8 size 0x78 virtual false final false
static inline ::UnityEngine::Playables::ScriptPlayableOutput Create(::UnityEngine::Playables::PlayableGraph  graph, ::StringW  name) ;

/// @brief Method .ctor addr 0x2cf5b3c size 0xbc virtual false final false
inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle  handle) ;

/// @brief Method get_Null addr 0x2cf5ac4 size 0x78 virtual false final false
static inline ::UnityEngine::Playables::ScriptPlayableOutput get_Null() ;

/// @brief Method GetHandle addr 0x2cf5bf8 size 0xc virtual true final true
inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2cf5c04 size 0x4 virtual false final false
static inline ::UnityEngine::Playables::PlayableOutput op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Playables::ScriptPlayableOutput  output) ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
constexpr ScriptPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle  m_Handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ScriptPlayableOutput(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ScriptPlayableOutput()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::ScriptPlayableOutput, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::ScriptPlayableOutput, "UnityEngine.Playables", "ScriptPlayableOutput");
