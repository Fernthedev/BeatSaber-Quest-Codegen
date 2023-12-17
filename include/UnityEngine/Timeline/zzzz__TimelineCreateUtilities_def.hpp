#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TimelineCreateUtilities)
namespace UnityEngine {
class AnimationClip;
}
namespace System {
class Type;
}
namespace UnityEngine::Timeline {
class __TimelineCreateUtilities____c__DisplayClass0_1;
}
namespace UnityEngine::Timeline {
class __TimelineCreateUtilities____c__DisplayClass0_0;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineCreateUtilities;
}
namespace UnityEngine::Timeline {
class __TimelineCreateUtilities____c__DisplayClass0_0;
}
namespace UnityEngine::Timeline {
class __TimelineCreateUtilities____c__DisplayClass0_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineCreateUtilities);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1);
// Type: ::<>c__DisplayClass0_0
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13937))
// CS Name: ::TimelineCreateUtilities::<>c__DisplayClass0_0*
class CORDL_TYPE __TimelineCreateUtilities____c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

static inline ::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0* New_ctor() ;

/// @brief Method .ctor addr 0x2c72174 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GenerateUniqueActorName>b__0 addr 0x2c7265c size 0x30 virtual false final false
inline bool _GenerateUniqueActorName_b__0(::UnityEngine::ScriptableObject*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__TimelineCreateUtilities____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TimelineCreateUtilities____c__DisplayClass0_0(__TimelineCreateUtilities____c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TimelineCreateUtilities____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TimelineCreateUtilities____c__DisplayClass0_0(__TimelineCreateUtilities____c__DisplayClass0_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TimelineCreateUtilities____c__DisplayClass0_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Type: ::<>c__DisplayClass0_1
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13938))
// CS Name: ::TimelineCreateUtilities::<>c__DisplayClass0_1*
class CORDL_TYPE __TimelineCreateUtilities____c__DisplayClass0_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field result offset 0x10
 __declspec(property(get=__get_result, put=__set_result)) ::StringW  result;

constexpr void __set_result(::StringW  value) ;

constexpr ::StringW& __get_result() ;

constexpr ::StringW const& __get_result() const;

static inline ::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1* New_ctor() ;

/// @brief Method .ctor addr 0x2c7217c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GenerateUniqueActorName>b__1 addr 0x2c7268c size 0x30 virtual false final false
inline bool _GenerateUniqueActorName_b__1(::UnityEngine::ScriptableObject*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__TimelineCreateUtilities____c__DisplayClass0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TimelineCreateUtilities____c__DisplayClass0_1(__TimelineCreateUtilities____c__DisplayClass0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TimelineCreateUtilities____c__DisplayClass0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TimelineCreateUtilities____c__DisplayClass0_1(__TimelineCreateUtilities____c__DisplayClass0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TimelineCreateUtilities____c__DisplayClass0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimelineCreateUtilities
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13939))
// CS Name: ::UnityEngine.Timeline::TimelineCreateUtilities*
class CORDL_TYPE TimelineCreateUtilities : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_1 = ::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1;

using __c__DisplayClass0_0 = ::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GenerateUniqueActorName addr 0x2c71e84 size 0x2f0 virtual false final false
static inline ::StringW GenerateUniqueActorName(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*  tracks, ::StringW  name) ;

/// @brief Method SaveAssetIntoObject addr 0x2c71ca0 size 0xe8 virtual false final false
static inline void SaveAssetIntoObject(::UnityEngine::Object*  childAsset, ::UnityEngine::Object*  masterAsset) ;

/// @brief Method RemoveAssetFromObject addr 0x2c71d88 size 0x9c virtual false final false
static inline void RemoveAssetFromObject(::UnityEngine::Object*  childAsset, ::UnityEngine::Object*  masterAsset) ;

/// @brief Method CreateAnimationClipForTrack addr 0x2c72184 size 0x1b8 virtual false final false
static inline ::UnityEngine::AnimationClip* CreateAnimationClipForTrack(::StringW  name, ::UnityEngine::Timeline::TrackAsset*  track, bool  isLegacy) ;

/// @brief Method ValidateParentTrack addr 0x2c7233c size 0x320 virtual false final false
static inline bool ValidateParentTrack(::UnityEngine::Timeline::TrackAsset*  parent, ::System::Type*  childType) ;

// Ctor Parameters [CppParam { name: "", ty: "TimelineCreateUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimelineCreateUtilities(TimelineCreateUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimelineCreateUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimelineCreateUtilities(TimelineCreateUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimelineCreateUtilities()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineCreateUtilities, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimelineCreateUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineCreateUtilities*, "UnityEngine.Timeline", "TimelineCreateUtilities");
NEED_NO_BOX(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0*, "UnityEngine.Timeline", "TimelineCreateUtilities/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1*, "UnityEngine.Timeline", "TimelineCreateUtilities/<>c__DisplayClass0_1");
