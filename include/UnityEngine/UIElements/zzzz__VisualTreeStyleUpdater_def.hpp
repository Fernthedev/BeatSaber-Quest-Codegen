#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeStyleUpdater)
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
class VisualTreeStyleUpdaterTraversal;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeStyleUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeStyleUpdater);
// Type: UnityEngine.UIElements::VisualTreeStyleUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6754))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6816))
// CS Name: ::UnityEngine.UIElements::VisualTreeStyleUpdater*
class CORDL_TYPE VisualTreeStyleUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::UIElements::BaseVisualTreeUpdater)]{};

/// @brief Field m_ApplyStyleUpdateList offset 0x20
 __declspec(property(get=__get_m_ApplyStyleUpdateList, put=__set_m_ApplyStyleUpdateList)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*  m_ApplyStyleUpdateList;

/// @brief Field m_TransitionPropertyUpdateList offset 0x28
 __declspec(property(get=__get_m_TransitionPropertyUpdateList, put=__set_m_TransitionPropertyUpdateList)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*  m_TransitionPropertyUpdateList;

/// @brief Field m_IsApplyingStyles offset 0x30
 __declspec(property(get=__get_m_IsApplyingStyles, put=__set_m_IsApplyingStyles)) bool  m_IsApplyingStyles;

/// @brief Field m_Version offset 0x34
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) uint32_t  m_Version;

/// @brief Field m_LastVersion offset 0x38
 __declspec(property(get=__get_m_LastVersion, put=__set_m_LastVersion)) uint32_t  m_LastVersion;

/// @brief Field m_StyleContextHierarchyTraversal offset 0x40
 __declspec(property(get=__get_m_StyleContextHierarchyTraversal, put=__set_m_StyleContextHierarchyTraversal)) ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*  m_StyleContextHierarchyTraversal;

 __declspec(property(get=get_profilerMarker)) ::Unity::Profiling::ProfilerMarker  profilerMarker;

constexpr void __set_m_ApplyStyleUpdateList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* __get_m_ApplyStyleUpdateList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> __get_m_ApplyStyleUpdateList() const;

constexpr void __set_m_TransitionPropertyUpdateList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* __get_m_TransitionPropertyUpdateList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> __get_m_TransitionPropertyUpdateList() const;

constexpr void __set_m_IsApplyingStyles(bool  value) ;

constexpr bool& __get_m_IsApplyingStyles() ;

constexpr bool const& __get_m_IsApplyingStyles() const;

constexpr void __set_m_Version(uint32_t  value) ;

constexpr uint32_t& __get_m_Version() ;

constexpr uint32_t const& __get_m_Version() const;

constexpr void __set_m_LastVersion(uint32_t  value) ;

constexpr uint32_t& __get_m_LastVersion() ;

constexpr uint32_t const& __get_m_LastVersion() const;

constexpr void __set_m_StyleContextHierarchyTraversal(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*  value) ;

constexpr ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal* __get_m_StyleContextHierarchyTraversal() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*> __get_m_StyleContextHierarchyTraversal() const;

static inline void setStaticF_s_Description(::StringW  value) ;

static inline ::StringW getStaticF_s_Description() ;

static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker() ;

/// @brief Method get_profilerMarker addr 0x2dc0f3c size 0x58 virtual true final false
inline ::Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method OnVersionChanged addr 0x2dc0f94 size 0xc8 virtual true final false
inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::VersionChangeType  versionChangeType) ;

/// @brief Method Update addr 0x2dc10dc size 0x30c virtual true final false
inline void Update() ;

/// @brief Method ApplyStyles addr 0x2dc13e8 size 0xe0 virtual false final false
inline void ApplyStyles() ;

static inline ::UnityEngine::UIElements::VisualTreeStyleUpdater* New_ctor() ;

/// @brief Method .ctor addr 0x2dc184c size 0xd4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeStyleUpdater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualTreeStyleUpdater(VisualTreeStyleUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeStyleUpdater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualTreeStyleUpdater(VisualTreeStyleUpdater const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VisualTreeStyleUpdater()  = default;
public:


// Fields

// Static field s_Description

// Static field s_ProfilerMarker


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeStyleUpdater, 0x48>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeStyleUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeStyleUpdater*, "UnityEngine.UIElements", "VisualTreeStyleUpdater");
