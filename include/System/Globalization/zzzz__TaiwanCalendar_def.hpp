#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaiwanCalendar)
namespace System {
struct DayOfWeek;
}
namespace System::Globalization {
class GregorianCalendarHelper;
}
namespace System {
struct DateTime;
}
namespace System::Globalization {
class EraInfo;
}
namespace System::Globalization {
class Calendar;
}
// Forward declare root types
namespace System::Globalization {
class TaiwanCalendar;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::TaiwanCalendar);
// Type: System.Globalization::TaiwanCalendar
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3696))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3705))
// CS Name: ::System.Globalization::TaiwanCalendar*
class CORDL_TYPE TaiwanCalendar : public ::System::Globalization::Calendar {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Globalization::Calendar)]{};

/// @brief Field helper offset 0x20
 __declspec(property(get=__get_helper, put=__set_helper)) ::System::Globalization::GregorianCalendarHelper*  helper;

 __declspec(property(get=get_MinSupportedDateTime)) ::System::DateTime  MinSupportedDateTime;

 __declspec(property(get=get_MaxSupportedDateTime)) ::System::DateTime  MaxSupportedDateTime;

 __declspec(property(get=get_ID)) int32_t  _cordl_ID;

 __declspec(property(get=get_Eras)) ::ArrayW<int32_t,::Array<int32_t>*>  Eras;

 __declspec(property(get=get_TwoDigitYearMax, put=set_TwoDigitYearMax)) int32_t  TwoDigitYearMax;

static inline void setStaticF_taiwanEraInfo(::ArrayW<::System::Globalization::EraInfo*,::Array<::System::Globalization::EraInfo*>*>  value) ;

static inline ::ArrayW<::System::Globalization::EraInfo*,::Array<::System::Globalization::EraInfo*>*> getStaticF_taiwanEraInfo() ;

static inline void setStaticF_s_defaultInstance(::System::Globalization::Calendar*  value) ;

static inline ::System::Globalization::Calendar* getStaticF_s_defaultInstance() ;

constexpr void __set_helper(::System::Globalization::GregorianCalendarHelper*  value) ;

constexpr ::System::Globalization::GregorianCalendarHelper* __get_helper() ;

constexpr ::cordl_internals::to_const_pointer<::System::Globalization::GregorianCalendarHelper*> __get_helper() const;

static inline void setStaticF_calendarMinValue(::System::DateTime  value) ;

static inline ::System::DateTime getStaticF_calendarMinValue() ;

/// @brief Method GetDefaultInstance addr 0x2567154 size 0xb8 virtual false final false
static inline ::System::Globalization::Calendar* GetDefaultInstance() ;

/// @brief Method get_MinSupportedDateTime addr 0x25673dc size 0x58 virtual true final false
inline ::System::DateTime get_MinSupportedDateTime() ;

/// @brief Method get_MaxSupportedDateTime addr 0x2567434 size 0x58 virtual true final false
inline ::System::DateTime get_MaxSupportedDateTime() ;

static inline ::System::Globalization::TaiwanCalendar* New_ctor() ;

/// @brief Method .ctor addr 0x256720c size 0x1d0 virtual false final false
inline void _ctor() ;

/// @brief Method get_ID addr 0x256748c size 0x8 virtual true final false
inline int32_t get_ID() ;

/// @brief Method GetDaysInMonth addr 0x2567494 size 0x18 virtual true final false
inline int32_t GetDaysInMonth(int32_t  year, int32_t  month, int32_t  era) ;

/// @brief Method GetDaysInYear addr 0x25674ac size 0x18 virtual true final false
inline int32_t GetDaysInYear(int32_t  year, int32_t  era) ;

/// @brief Method GetDayOfMonth addr 0x25674c4 size 0x48 virtual true final false
inline int32_t GetDayOfMonth(::System::DateTime  time) ;

/// @brief Method GetDayOfWeek addr 0x256750c size 0x18 virtual true final false
inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime  time) ;

/// @brief Method GetMonthsInYear addr 0x2567524 size 0x24 virtual true final false
inline int32_t GetMonthsInYear(int32_t  year, int32_t  era) ;

/// @brief Method GetEra addr 0x2567548 size 0x18 virtual true final false
inline int32_t GetEra(::System::DateTime  time) ;

/// @brief Method GetMonth addr 0x2567560 size 0x48 virtual true final false
inline int32_t GetMonth(::System::DateTime  time) ;

/// @brief Method GetYear addr 0x25675a8 size 0x18 virtual true final false
inline int32_t GetYear(::System::DateTime  time) ;

/// @brief Method IsLeapYear addr 0x25675c0 size 0x18 virtual true final false
inline bool IsLeapYear(int32_t  year, int32_t  era) ;

/// @brief Method ToDateTime addr 0x25675d8 size 0x20 virtual true final false
inline ::System::DateTime ToDateTime(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  millisecond, int32_t  era) ;

/// @brief Method get_Eras addr 0x25675f8 size 0x18 virtual true final false
inline ::ArrayW<int32_t,::Array<int32_t>*> get_Eras() ;

/// @brief Method get_TwoDigitYearMax addr 0x2567610 size 0x44 virtual true final false
inline int32_t get_TwoDigitYearMax() ;

/// @brief Method set_TwoDigitYearMax addr 0x2567654 size 0x13c virtual true final false
inline void set_TwoDigitYearMax(int32_t  value) ;

/// @brief Method ToFourDigitYear addr 0x2567790 size 0x150 virtual true final false
inline int32_t ToFourDigitYear(int32_t  year) ;

// Ctor Parameters [CppParam { name: "", ty: "TaiwanCalendar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaiwanCalendar(TaiwanCalendar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaiwanCalendar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaiwanCalendar(TaiwanCalendar const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaiwanCalendar()  = default;
public:


// Fields

// Static field taiwanEraInfo

// Static field s_defaultInstance

// Static field calendarMinValue


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::TaiwanCalendar, 0x28>, "Size mismatch!");

} // namespace end def System::Globalization
NEED_NO_BOX(::System::Globalization::TaiwanCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TaiwanCalendar*, "System.Globalization", "TaiwanCalendar");
