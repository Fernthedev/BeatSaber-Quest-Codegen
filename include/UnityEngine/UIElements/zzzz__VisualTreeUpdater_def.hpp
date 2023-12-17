#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeUpdater)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class __VisualTreeUpdater__UpdaterArray;
}
namespace UnityEngine::UIElements {
struct VisualTreeUpdatePhase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeUpdater;
}
namespace UnityEngine::UIElements {
class __VisualTreeUpdater__UpdaterArray;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeUpdater);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray);
// Type: ::UpdaterArray
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6751))
// CS Name: ::VisualTreeUpdater::UpdaterArray*
class CORDL_TYPE __VisualTreeUpdater__UpdaterArray : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_VisualTreeUpdaters offset 0x10
 __declspec(property(get=__get_m_VisualTreeUpdaters, put=__set_m_VisualTreeUpdaters)) ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*,::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>  m_VisualTreeUpdaters;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::UIElements::IVisualTreeUpdater*  Item[];

 __declspec(property(get=get_Item)) ::UnityEngine::UIElements::IVisualTreeUpdater*  Item[];

constexpr void __set_m_VisualTreeUpdaters(::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*,::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*,::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>& __get_m_VisualTreeUpdaters() ;

constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*,::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> const& __get_m_VisualTreeUpdaters() const;

static inline ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray* New_ctor() ;

/// @brief Method .ctor addr 0x2db2524 size 0x5c virtual false final false
inline void _ctor() ;

/// @brief Method set_Item addr 0x2db2b40 size 0x64 virtual false final false
inline void set_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase  phase, ::UnityEngine::UIElements::IVisualTreeUpdater*  value) ;

/// @brief Method get_Item addr 0x2db2a10 size 0x30 virtual false final false
inline ::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase  phase) ;

/// @brief Method get_Item addr 0x2db2788 size 0x30 virtual false final false
inline ::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "", ty: "__VisualTreeUpdater__UpdaterArray", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__VisualTreeUpdater__UpdaterArray(__VisualTreeUpdater__UpdaterArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__VisualTreeUpdater__UpdaterArray", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__VisualTreeUpdater__UpdaterArray(__VisualTreeUpdater__UpdaterArray const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __VisualTreeUpdater__UpdaterArray()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::VisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6752))
// CS Name: ::UnityEngine.UIElements::VisualTreeUpdater*
class CORDL_TYPE VisualTreeUpdater : public ::System::Object {
public:
// Declarations
using UpdaterArray = ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Panel offset 0x10
 __declspec(property(get=__get_m_Panel, put=__set_m_Panel)) ::UnityEngine::UIElements::BaseVisualElementPanel*  m_Panel;

/// @brief Field m_UpdaterArray offset 0x18
 __declspec(property(get=__get_m_UpdaterArray, put=__set_m_UpdaterArray)) ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*  m_UpdaterArray;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel*  value) ;

constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* __get_m_Panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVisualElementPanel*> __get_m_Panel() const;

constexpr void __set_m_UpdaterArray(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*  value) ;

constexpr ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray* __get_m_UpdaterArray() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*> __get_m_UpdaterArray() const;

static inline ::UnityEngine::UIElements::VisualTreeUpdater* New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel*  panel) ;

/// @brief Method .ctor addr 0x2db24a8 size 0x7c virtual false final false
inline void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel*  panel) ;

/// @brief Method Dispose addr 0x2db26bc size 0xcc virtual true final true
inline void Dispose() ;

/// @brief Method UpdateVisualTreePhase addr 0x2db27b8 size 0x258 virtual false final false
inline void UpdateVisualTreePhase(::UnityEngine::UIElements::VisualTreeUpdatePhase  phase) ;

/// @brief Method OnVersionChanged addr 0x2db2a40 size 0xe8 virtual false final false
inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::VersionChangeType  versionChangeType) ;

/// @brief Method SetUpdater addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void SetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase  phase) ;

/// @brief Method GetUpdater addr 0x2db2b28 size 0x18 virtual false final false
inline ::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase  phase) ;

/// @brief Method SetDefaultUpdaters addr 0x2db2580 size 0x13c virtual false final false
inline void SetDefaultUpdaters() ;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeUpdater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualTreeUpdater(VisualTreeUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeUpdater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualTreeUpdater(VisualTreeUpdater const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VisualTreeUpdater()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeUpdater, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeUpdater*, "UnityEngine.UIElements", "VisualTreeUpdater");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*, "UnityEngine.UIElements", "VisualTreeUpdater/UpdaterArray");
