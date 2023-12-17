#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/zzzz__Baker_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericBaker)
namespace UnityEngine {
class AnimationClip;
}
namespace RootMotion {
class BakerTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion {
class GenericBaker;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::GenericBaker);
// Type: RootMotion::GenericBaker
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12472))
// CS Name: ::RootMotion::GenericBaker*
class CORDL_TYPE GenericBaker : public ::RootMotion::Baker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::RootMotion::Baker)]{};

/// @brief Field markAsLegacy offset 0x74
 __declspec(property(get=__get_markAsLegacy, put=__set_markAsLegacy)) bool  markAsLegacy;

/// @brief Field root offset 0x78
 __declspec(property(get=__get_root, put=__set_root)) ::UnityEngine::Transform*  root;

/// @brief Field rootNode offset 0x80
 __declspec(property(get=__get_rootNode, put=__set_rootNode)) ::UnityEngine::Transform*  rootNode;

/// @brief Field ignoreList offset 0x88
 __declspec(property(get=__get_ignoreList, put=__set_ignoreList)) ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  ignoreList;

/// @brief Field bakePositionList offset 0x90
 __declspec(property(get=__get_bakePositionList, put=__set_bakePositionList)) ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  bakePositionList;

/// @brief Field children offset 0x98
 __declspec(property(get=__get_children, put=__set_children)) ::ArrayW<::RootMotion::BakerTransform*,::Array<::RootMotion::BakerTransform*>*>  children;

/// @brief Field rootChild offset 0xa0
 __declspec(property(get=__get_rootChild, put=__set_rootChild)) ::RootMotion::BakerTransform*  rootChild;

/// @brief Field rootChildIndex offset 0xa8
 __declspec(property(get=__get_rootChildIndex, put=__set_rootChildIndex)) int32_t  rootChildIndex;

constexpr void __set_markAsLegacy(bool  value) ;

constexpr bool& __get_markAsLegacy() ;

constexpr bool const& __get_markAsLegacy() const;

constexpr void __set_root(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_root() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_root() const;

constexpr void __set_rootNode(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_rootNode() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_rootNode() const;

constexpr void __set_ignoreList(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& __get_ignoreList() ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& __get_ignoreList() const;

constexpr void __set_bakePositionList(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& __get_bakePositionList() ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& __get_bakePositionList() const;

constexpr void __set_children(::ArrayW<::RootMotion::BakerTransform*,::Array<::RootMotion::BakerTransform*>*>  value) ;

constexpr ::ArrayW<::RootMotion::BakerTransform*,::Array<::RootMotion::BakerTransform*>*>& __get_children() ;

constexpr ::ArrayW<::RootMotion::BakerTransform*,::Array<::RootMotion::BakerTransform*>*> const& __get_children() const;

constexpr void __set_rootChild(::RootMotion::BakerTransform*  value) ;

constexpr ::RootMotion::BakerTransform* __get_rootChild() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::BakerTransform*> __get_rootChild() const;

constexpr void __set_rootChildIndex(int32_t  value) ;

constexpr int32_t& __get_rootChildIndex() ;

constexpr int32_t const& __get_rootChildIndex() const;

/// @brief Method Awake addr 0x1230e20 size 0x218 virtual false final false
inline void Awake() ;

/// @brief Method GetCharacterRoot addr 0x123123c size 0x8 virtual true final false
inline ::UnityEngine::Transform* GetCharacterRoot() ;

/// @brief Method OnStartBaking addr 0x1231244 size 0xd0 virtual true final false
inline void OnStartBaking() ;

/// @brief Method OnSetLoopFrame addr 0x1231430 size 0x6c virtual true final false
inline void OnSetLoopFrame(float_t  time) ;

/// @brief Method OnSetCurves addr 0x1231694 size 0x64 virtual true final false
inline void OnSetCurves(ByRef<::UnityEngine::AnimationClip*>  clip) ;

/// @brief Method OnSetKeyframes addr 0x12319ac size 0x6c virtual true final false
inline void OnSetKeyframes(float_t  time, bool  lastFrame) ;

/// @brief Method IsIgnored addr 0x1231038 size 0xb8 virtual false final false
inline bool IsIgnored(::UnityEngine::Transform*  t) ;

/// @brief Method BakePosition addr 0x12310f0 size 0xb8 virtual false final false
inline bool BakePosition(::UnityEngine::Transform*  t) ;

static inline ::RootMotion::GenericBaker* New_ctor() ;

/// @brief Method .ctor addr 0x1231c0c size 0x5c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericBaker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericBaker(GenericBaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericBaker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericBaker(GenericBaker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericBaker()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::GenericBaker, 0xb0>, "Size mismatch!");

} // namespace end def RootMotion
NEED_NO_BOX(::RootMotion::GenericBaker);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::GenericBaker*, "RootMotion", "GenericBaker");
