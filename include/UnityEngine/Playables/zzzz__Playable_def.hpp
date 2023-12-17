#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Playable)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct Playable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::Playable);
// Type: UnityEngine.Playables::Playable
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10428))
// CS Name: ::UnityEngine.Playables::Playable
struct CORDL_TYPE Playable : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle offset 0x0
 __declspec(property(get=__get_m_Handle, put=__set_m_Handle)) ::UnityEngine::Playables::PlayableHandle  m_Handle;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::Playable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Playables::Playable>*() ;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableHandle  value) ;

constexpr ::UnityEngine::Playables::PlayableHandle& __get_m_Handle() ;

constexpr ::UnityEngine::Playables::PlayableHandle const& __get_m_Handle() const;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Playables::Playable  value) ;

static inline ::UnityEngine::Playables::Playable getStaticF_m_NullPlayable() ;

/// @brief Method get_Null addr 0x2cf5970 size 0x58 virtual false final false
static inline ::UnityEngine::Playables::Playable get_Null() ;

/// @brief Method Create addr 0x2cf5c40 size 0x70 virtual false final false
static inline ::UnityEngine::Playables::Playable Create(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// @brief Method .ctor addr 0x2cf5d04 size 0x8 virtual false final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

/// @brief Method GetHandle addr 0x2cf5d0c size 0xc virtual true final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method IsPlayableOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline bool IsPlayableOfType() ;

/// @brief Method GetPlayableType addr 0x2cf5d18 size 0x24 virtual false final false
inline ::System::Type* GetPlayableType() ;

/// @brief Method Equals addr 0x2cf5db0 size 0x74 virtual true final true
inline bool Equals(::UnityEngine::Playables::Playable  other) ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr Playable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Playable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Playable()  = default;


// Fields

// Static field m_NullPlayable


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::Playable, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::Playable, "UnityEngine.Playables", "Playable");
