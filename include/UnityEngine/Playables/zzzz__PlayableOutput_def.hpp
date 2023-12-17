#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PlayableOutput)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableOutput);
// Type: UnityEngine.Playables::PlayableOutput
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10438))
// CS Name: ::UnityEngine.Playables::PlayableOutput
struct CORDL_TYPE PlayableOutput : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle offset 0x0
 __declspec(property(get=__get_m_Handle, put=__set_m_Handle)) ::UnityEngine::Playables::PlayableOutputHandle  m_Handle;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr operator  ::UnityEngine::Playables::IPlayableOutput*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>*() ;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableOutputHandle  value) ;

constexpr ::UnityEngine::Playables::PlayableOutputHandle& __get_m_Handle() ;

constexpr ::UnityEngine::Playables::PlayableOutputHandle const& __get_m_Handle() const;

static inline void setStaticF_m_NullPlayableOutput(::UnityEngine::Playables::PlayableOutput  value) ;

static inline ::UnityEngine::Playables::PlayableOutput getStaticF_m_NullPlayableOutput() ;

/// @brief Method get_Null addr 0x2cf5f8c size 0x58 virtual false final false
static inline ::UnityEngine::Playables::PlayableOutput get_Null() ;

/// @brief Method .ctor addr 0x2cf5c08 size 0x8 virtual false final false
inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle  handle) ;

/// @brief Method GetHandle addr 0x2cf68f8 size 0xc virtual true final true
inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle() ;

/// @brief Method IsPlayableOutputOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline bool IsPlayableOutputOfType() ;

/// @brief Method Equals addr 0x2cf6904 size 0x74 virtual true final true
inline bool Equals(::UnityEngine::Playables::PlayableOutput  other) ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
constexpr PlayableOutput(::UnityEngine::Playables::PlayableOutputHandle  m_Handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PlayableOutput(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PlayableOutput()  = default;


// Fields

// Static field m_NullPlayableOutput


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableOutput, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableOutput, "UnityEngine.Playables", "PlayableOutput");
