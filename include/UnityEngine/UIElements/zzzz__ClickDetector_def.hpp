#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClickDetector)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class __ClickDetector__ButtonClickStatus;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ClickDetector;
}
namespace UnityEngine::UIElements {
class __ClickDetector__ButtonClickStatus;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ClickDetector);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus);
// Type: ::ButtonClickStatus
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6755))
// CS Name: ::ClickDetector::ButtonClickStatus*
class CORDL_TYPE __ClickDetector__ButtonClickStatus : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field m_Target offset 0x10
 __declspec(property(get=__get_m_Target, put=__set_m_Target)) ::UnityEngine::UIElements::VisualElement*  m_Target;

/// @brief Field m_PointerDownPosition offset 0x18
 __declspec(property(get=__get_m_PointerDownPosition, put=__set_m_PointerDownPosition)) ::UnityEngine::Vector3  m_PointerDownPosition;

/// @brief Field m_LastPointerDownTime offset 0x28
 __declspec(property(get=__get_m_LastPointerDownTime, put=__set_m_LastPointerDownTime)) int64_t  m_LastPointerDownTime;

/// @brief Field m_ClickCount offset 0x30
 __declspec(property(get=__get_m_ClickCount, put=__set_m_ClickCount)) int32_t  m_ClickCount;

constexpr void __set_m_Target(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_Target() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_Target() const;

constexpr void __set_m_PointerDownPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_PointerDownPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_m_PointerDownPosition() const;

constexpr void __set_m_LastPointerDownTime(int64_t  value) ;

constexpr int64_t& __get_m_LastPointerDownTime() ;

constexpr int64_t const& __get_m_LastPointerDownTime() const;

constexpr void __set_m_ClickCount(int32_t  value) ;

constexpr int32_t& __get_m_ClickCount() ;

constexpr int32_t const& __get_m_ClickCount() const;

/// @brief Method Reset addr 0x2db334c size 0x64 virtual false final false
inline void Reset() ;

static inline ::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus* New_ctor() ;

/// @brief Method .ctor addr 0x2db30dc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ClickDetector__ButtonClickStatus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ClickDetector__ButtonClickStatus(__ClickDetector__ButtonClickStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ClickDetector__ButtonClickStatus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ClickDetector__ButtonClickStatus(__ClickDetector__ButtonClickStatus const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ClickDetector__ButtonClickStatus()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ClickDetector
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6756))
// CS Name: ::UnityEngine.UIElements::ClickDetector*
class CORDL_TYPE ClickDetector : public ::System::Object {
public:
// Declarations
using ButtonClickStatus = ::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_ClickStatus offset 0x10
 __declspec(property(get=__get_m_ClickStatus, put=__set_m_ClickStatus)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus*>*  m_ClickStatus;

constexpr void __set_m_ClickStatus(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus*>* __get_m_ClickStatus() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus*>*> __get_m_ClickStatus() const;

static inline void setStaticF__s_DoubleClickTime_k__BackingField(int32_t  value) ;

static inline int32_t getStaticF__s_DoubleClickTime_k__BackingField() ;

/// @brief Method get_s_DoubleClickTime addr 0x2db2dc8 size 0x58 virtual false final false
static inline int32_t get_s_DoubleClickTime() ;

/// @brief Method set_s_DoubleClickTime addr 0x2db2e20 size 0x5c virtual false final false
static inline void set_s_DoubleClickTime(int32_t  value) ;

static inline ::UnityEngine::UIElements::ClickDetector* New_ctor() ;

/// @brief Method .ctor addr 0x2db2e7c size 0x260 virtual false final false
inline void _ctor() ;

/// @brief Method StartClickTracking addr 0x2db30e4 size 0x268 virtual false final false
inline void StartClickTracking(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method SendClickEvent addr 0x2db33b0 size 0x3e4 virtual false final false
inline void SendClickEvent(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method CancelClickTracking addr 0x2db38b4 size 0xfc virtual false final false
inline void CancelClickTracking(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method ProcessEvent addr 0x2db39b0 size 0x51c virtual false final false
inline void ProcessEvent(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method ContainsPointer addr 0x2db3794 size 0x120 virtual false final false
static inline bool ContainsPointer(::UnityEngine::UIElements::VisualElement*  element, ::UnityEngine::Vector2  position) ;

// Ctor Parameters [CppParam { name: "", ty: "ClickDetector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClickDetector(ClickDetector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClickDetector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClickDetector(ClickDetector const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ClickDetector()  = default;
public:


// Fields

// Static field <s_DoubleClickTime>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ClickDetector, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ClickDetector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ClickDetector*, "UnityEngine.UIElements", "ClickDetector");
NEED_NO_BOX(::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus*, "UnityEngine.UIElements", "ClickDetector/ButtonClickStatus");
