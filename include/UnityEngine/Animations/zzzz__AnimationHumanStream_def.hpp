#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationHumanStream)
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationHumanStream;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationHumanStream);
// Type: UnityEngine.Animations::AnimationHumanStream
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14896))
// CS Name: ::UnityEngine.Animations::AnimationHumanStream
struct CORDL_TYPE AnimationHumanStream : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field stream offset 0x0
 __declspec(property(get=__get_stream, put=__set_stream)) ::cordl_internals::intptr_t  stream;

constexpr void __set_stream(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_stream() ;

constexpr ::cordl_internals::intptr_t const& __get_stream() const;

// Ctor Parameters [CppParam { name: "stream", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr AnimationHumanStream(::cordl_internals::intptr_t  stream) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AnimationHumanStream(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AnimationHumanStream()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationHumanStream, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationHumanStream, "UnityEngine.Animations", "AnimationHumanStream");
