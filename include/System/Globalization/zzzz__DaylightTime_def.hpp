#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DaylightTime)
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Globalization {
class DaylightTime;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::DaylightTime);
// Type: System.Globalization::DaylightTime
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3671))
// CS Name: ::System.Globalization::DaylightTime*
class CORDL_TYPE DaylightTime : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _start offset 0x10
 __declspec(property(get=__get__start, put=__set__start)) ::System::DateTime  _start;

/// @brief Field _end offset 0x18
 __declspec(property(get=__get__end, put=__set__end)) ::System::DateTime  _end;

/// @brief Field _delta offset 0x20
 __declspec(property(get=__get__delta, put=__set__delta)) ::System::TimeSpan  _delta;

 __declspec(property(get=get_Start)) ::System::DateTime  Start;

 __declspec(property(get=get_End)) ::System::DateTime  End;

 __declspec(property(get=get_Delta)) ::System::TimeSpan  Delta;

constexpr void __set__start(::System::DateTime  value) ;

constexpr ::System::DateTime& __get__start() ;

constexpr ::System::DateTime const& __get__start() const;

constexpr void __set__end(::System::DateTime  value) ;

constexpr ::System::DateTime& __get__end() ;

constexpr ::System::DateTime const& __get__end() const;

constexpr void __set__delta(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get__delta() ;

constexpr ::System::TimeSpan const& __get__delta() const;

static inline ::System::Globalization::DaylightTime* New_ctor(::System::DateTime  start, ::System::DateTime  end, ::System::TimeSpan  delta) ;

/// @brief Method .ctor addr 0x2554bec size 0x3c virtual false final false
inline void _ctor(::System::DateTime  start, ::System::DateTime  end, ::System::TimeSpan  delta) ;

/// @brief Method get_Start addr 0x2554c28 size 0x8 virtual false final false
inline ::System::DateTime get_Start() ;

/// @brief Method get_End addr 0x2554c30 size 0x8 virtual false final false
inline ::System::DateTime get_End() ;

/// @brief Method get_Delta addr 0x2554c38 size 0x8 virtual false final false
inline ::System::TimeSpan get_Delta() ;

// Ctor Parameters [CppParam { name: "", ty: "DaylightTime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DaylightTime(DaylightTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DaylightTime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DaylightTime(DaylightTime const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DaylightTime()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::DaylightTime, 0x28>, "Size mismatch!");

} // namespace end def System::Globalization
NEED_NO_BOX(::System::Globalization::DaylightTime);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DaylightTime*, "System.Globalization", "DaylightTime");
