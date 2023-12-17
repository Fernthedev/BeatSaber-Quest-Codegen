#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissionStage)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionStage;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionStage);
// Type: ::MissionStage
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4464))
// CS Name: ::MissionStage*
class CORDL_TYPE MissionStage : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _minimumMissionsToUnlock offset 0x18
 __declspec(property(get=__get__minimumMissionsToUnlock, put=__set__minimumMissionsToUnlock)) int32_t  _minimumMissionsToUnlock;

/// @brief Field _rectTransform offset 0x20
 __declspec(property(get=__get__rectTransform, put=__set__rectTransform)) ::UnityEngine::RectTransform*  _rectTransform;

 __declspec(property(get=get_minimumMissionsToUnlock)) int32_t  minimumMissionsToUnlock;

 __declspec(property(get=get_position)) ::UnityEngine::Vector2  position;

constexpr void __set__minimumMissionsToUnlock(int32_t  value) ;

constexpr int32_t& __get__minimumMissionsToUnlock() ;

constexpr int32_t const& __get__minimumMissionsToUnlock() const;

constexpr void __set__rectTransform(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__rectTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__rectTransform() const;

/// @brief Method get_minimumMissionsToUnlock addr 0x2352e84 size 0x8 virtual false final false
inline int32_t get_minimumMissionsToUnlock() ;

/// @brief Method get_position addr 0x2352e8c size 0x1c virtual false final false
inline ::UnityEngine::Vector2 get_position() ;

static inline ::GlobalNamespace::MissionStage* New_ctor() ;

/// @brief Method .ctor addr 0x2352ea8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionStage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionStage(MissionStage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionStage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionStage(MissionStage const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionStage()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionStage, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionStage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionStage*, "", "MissionStage");
