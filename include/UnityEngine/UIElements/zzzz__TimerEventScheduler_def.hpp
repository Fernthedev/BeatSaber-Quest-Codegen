#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimerEventScheduler)
namespace UnityEngine::UIElements {
class ScheduledItem;
}
namespace UnityEngine::UIElements {
class IScheduler;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TimerEventScheduler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TimerEventScheduler);
// Type: UnityEngine.UIElements::TimerEventScheduler
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6943))
// CS Name: ::UnityEngine.UIElements::TimerEventScheduler*
class CORDL_TYPE TimerEventScheduler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field m_ScheduledItems offset 0x10
 __declspec(property(get=__get_m_ScheduledItems, put=__set_m_ScheduledItems)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>*  m_ScheduledItems;

/// @brief Field m_TransactionMode offset 0x18
 __declspec(property(get=__get_m_TransactionMode, put=__set_m_TransactionMode)) bool  m_TransactionMode;

/// @brief Field m_ScheduleTransactions offset 0x20
 __declspec(property(get=__get_m_ScheduleTransactions, put=__set_m_ScheduleTransactions)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>*  m_ScheduleTransactions;

/// @brief Field m_UnscheduleTransactions offset 0x28
 __declspec(property(get=__get_m_UnscheduleTransactions, put=__set_m_UnscheduleTransactions)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::ScheduledItem*>*  m_UnscheduleTransactions;

/// @brief Field disableThrottling offset 0x30
 __declspec(property(get=__get_disableThrottling, put=__set_disableThrottling)) bool  disableThrottling;

/// @brief Field m_LastUpdatedIndex offset 0x34
 __declspec(property(get=__get_m_LastUpdatedIndex, put=__set_m_LastUpdatedIndex)) int32_t  m_LastUpdatedIndex;

/// @brief Convert operator to "::UnityEngine::UIElements::IScheduler"
constexpr operator  ::UnityEngine::UIElements::IScheduler*() noexcept;

constexpr void __set_m_ScheduledItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>* __get_m_ScheduledItems() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>*> __get_m_ScheduledItems() const;

constexpr void __set_m_TransactionMode(bool  value) ;

constexpr bool& __get_m_TransactionMode() ;

constexpr bool const& __get_m_TransactionMode() const;

constexpr void __set_m_ScheduleTransactions(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>* __get_m_ScheduleTransactions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>*> __get_m_ScheduleTransactions() const;

constexpr void __set_m_UnscheduleTransactions(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::ScheduledItem*>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::ScheduledItem*>* __get_m_UnscheduleTransactions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::ScheduledItem*>*> __get_m_UnscheduleTransactions() const;

constexpr void __set_disableThrottling(bool  value) ;

constexpr bool& __get_disableThrottling() ;

constexpr bool const& __get_disableThrottling() const;

constexpr void __set_m_LastUpdatedIndex(int32_t  value) ;

constexpr int32_t& __get_m_LastUpdatedIndex() ;

constexpr int32_t const& __get_m_LastUpdatedIndex() const;

/// @brief Method Schedule addr 0x2e079a8 size 0x1c8 virtual true final true
inline void Schedule(::UnityEngine::UIElements::ScheduledItem*  item) ;

/// @brief Method RemovedScheduledItemAt addr 0x2e07b70 size 0x6c virtual false final false
inline bool RemovedScheduledItemAt(int32_t  index) ;

/// @brief Method Unschedule addr 0x2e07bdc size 0x1a4 virtual true final true
inline void Unschedule(::UnityEngine::UIElements::ScheduledItem*  item) ;

/// @brief Method PrivateUnSchedule addr 0x2e07d80 size 0xa0 virtual false final false
inline bool PrivateUnSchedule(::UnityEngine::UIElements::ScheduledItem*  sItem) ;

/// @brief Method UpdateScheduledEvents addr 0x2e07e20 size 0x310 virtual true final true
inline void UpdateScheduledEvents() ;

static inline ::UnityEngine::UIElements::TimerEventScheduler* New_ctor() ;

/// @brief Method .ctor addr 0x2e08130 size 0xf0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TimerEventScheduler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimerEventScheduler(TimerEventScheduler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimerEventScheduler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimerEventScheduler(TimerEventScheduler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimerEventScheduler()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TimerEventScheduler, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TimerEventScheduler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimerEventScheduler*, "UnityEngine.UIElements", "TimerEventScheduler");
