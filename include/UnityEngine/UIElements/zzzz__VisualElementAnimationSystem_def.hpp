#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementAnimationSystem)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::UIElements::Experimental {
class IValueAnimationUpdate;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementAnimationSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementAnimationSystem);
// Type: UnityEngine.UIElements::VisualElementAnimationSystem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6754))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6771))
// CS Name: ::UnityEngine.UIElements::VisualElementAnimationSystem*
class CORDL_TYPE VisualElementAnimationSystem : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::UIElements::BaseVisualTreeUpdater)]{};

/// @brief Field m_Animations offset 0x20
 __declspec(property(get=__get_m_Animations, put=__set_m_Animations)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*  m_Animations;

/// @brief Field m_IterationList offset 0x28
 __declspec(property(get=__get_m_IterationList, put=__set_m_IterationList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*  m_IterationList;

/// @brief Field m_HasNewAnimations offset 0x30
 __declspec(property(get=__get_m_HasNewAnimations, put=__set_m_HasNewAnimations)) bool  m_HasNewAnimations;

/// @brief Field m_IterationListDirty offset 0x31
 __declspec(property(get=__get_m_IterationListDirty, put=__set_m_IterationListDirty)) bool  m_IterationListDirty;

/// @brief Field lastUpdate offset 0x38
 __declspec(property(get=__get_lastUpdate, put=__set_lastUpdate)) int64_t  lastUpdate;

 __declspec(property(get=get_profilerMarker)) ::Unity::Profiling::ProfilerMarker  profilerMarker;

constexpr void __set_m_Animations(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* __get_m_Animations() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*> __get_m_Animations() const;

constexpr void __set_m_IterationList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* __get_m_IterationList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*> __get_m_IterationList() const;

constexpr void __set_m_HasNewAnimations(bool  value) ;

constexpr bool& __get_m_HasNewAnimations() ;

constexpr bool const& __get_m_HasNewAnimations() const;

constexpr void __set_m_IterationListDirty(bool  value) ;

constexpr bool& __get_m_IterationListDirty() ;

constexpr bool const& __get_m_IterationListDirty() const;

static inline void setStaticF_s_Description(::StringW  value) ;

static inline ::StringW getStaticF_s_Description() ;

static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker() ;

static inline void setStaticF_s_StylePropertyAnimationDescription(::StringW  value) ;

static inline ::StringW getStaticF_s_StylePropertyAnimationDescription() ;

static inline void setStaticF_s_StylePropertyAnimationProfilerMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_StylePropertyAnimationProfilerMarker() ;

constexpr void __set_lastUpdate(int64_t  value) ;

constexpr int64_t& __get_lastUpdate() ;

constexpr int64_t const& __get_lastUpdate() const;

/// @brief Method get_profilerMarker addr 0x2db6f78 size 0x58 virtual true final false
inline ::Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method get_stylePropertyAnimationProfilerMarker addr 0x2db6fd0 size 0x58 virtual false final false
static inline ::Unity::Profiling::ProfilerMarker get_stylePropertyAnimationProfilerMarker() ;

/// @brief Method UnregisterAnimation addr 0x2db7028 size 0x64 virtual false final false
inline void UnregisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*  anim) ;

/// @brief Method UnregisterAnimations addr 0x2db708c size 0x178 virtual false final false
inline void UnregisterAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*  anims) ;

/// @brief Method RegisterAnimation addr 0x2db7204 size 0x64 virtual false final false
inline void RegisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*  anim) ;

/// @brief Method RegisterAnimations addr 0x2db7268 size 0x178 virtual false final false
inline void RegisterAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*  anims) ;

/// @brief Method Update addr 0x2db73e0 size 0x46c virtual true final false
inline void Update() ;

/// @brief Method OnVersionChanged addr 0x2db7928 size 0x4 virtual true final false
inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::VersionChangeType  versionChangeType) ;

static inline ::UnityEngine::UIElements::VisualElementAnimationSystem* New_ctor() ;

/// @brief Method .ctor addr 0x2db792c size 0xc4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementAnimationSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualElementAnimationSystem(VisualElementAnimationSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementAnimationSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualElementAnimationSystem(VisualElementAnimationSystem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VisualElementAnimationSystem()  = default;
public:


// Fields

// Static field s_Description

// Static field s_ProfilerMarker

// Static field s_StylePropertyAnimationDescription

// Static field s_StylePropertyAnimationProfilerMarker


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementAnimationSystem, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementAnimationSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementAnimationSystem*, "UnityEngine.UIElements", "VisualElementAnimationSystem");
