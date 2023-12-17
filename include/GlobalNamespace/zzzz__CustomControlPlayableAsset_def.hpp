#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__ControlPlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(CustomControlPlayableAsset)
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace GlobalNamespace {
class AvatarColorBehaviour;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomControlPlayableAsset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomControlPlayableAsset);
// Type: ::CustomControlPlayableAsset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13874))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6008))
// CS Name: ::CustomControlPlayableAsset*
class CORDL_TYPE CustomControlPlayableAsset : public ::UnityEngine::Timeline::ControlPlayableAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::Timeline::ControlPlayableAsset)]{};

/// @brief Field _template offset 0x58
 __declspec(property(get=__get__template, put=__set__template)) ::GlobalNamespace::AvatarColorBehaviour*  _template;

 __declspec(property(get=get_clipCaps)) ::UnityEngine::Timeline::ClipCaps  clipCaps;

/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

constexpr void __set__template(::GlobalNamespace::AvatarColorBehaviour*  value) ;

constexpr ::GlobalNamespace::AvatarColorBehaviour* __get__template() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarColorBehaviour*> __get__template() const;

/// @brief Method get_clipCaps addr 0x2315858 size 0x8 virtual true final true
inline ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

static inline ::GlobalNamespace::CustomControlPlayableAsset* New_ctor() ;

/// @brief Method .ctor addr 0x2315860 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CustomControlPlayableAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomControlPlayableAsset(CustomControlPlayableAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomControlPlayableAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomControlPlayableAsset(CustomControlPlayableAsset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CustomControlPlayableAsset()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomControlPlayableAsset, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomControlPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomControlPlayableAsset*, "", "CustomControlPlayableAsset");
