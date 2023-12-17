#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TexturePlayableOutput)
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
// Forward declare root types
namespace UnityEngine::Experimental::Playables {
struct TexturePlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Playables::TexturePlayableOutput);
// Type: UnityEngine.Experimental.Playables::TexturePlayableOutput
namespace UnityEngine::Experimental::Playables {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10413))
// CS Name: ::UnityEngine.Experimental.Playables::TexturePlayableOutput
struct CORDL_TYPE TexturePlayableOutput : public ::bs_hook::ValueTypeWrapper<0x10> {
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

/// @brief Method GetHandle addr 0x2cf48b4 size 0xc virtual true final true
inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
constexpr TexturePlayableOutput(::UnityEngine::Playables::PlayableOutputHandle  m_Handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TexturePlayableOutput(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TexturePlayableOutput()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Playables::TexturePlayableOutput, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Playables::TexturePlayableOutput, "UnityEngine.Experimental.Playables", "TexturePlayableOutput");
