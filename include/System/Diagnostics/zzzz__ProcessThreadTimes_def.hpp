#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessThreadTimes)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Diagnostics {
class ProcessThreadTimes;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::ProcessThreadTimes);
// Type: System.Diagnostics::ProcessThreadTimes
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8953))
// CS Name: ::System.Diagnostics::ProcessThreadTimes*
class CORDL_TYPE ProcessThreadTimes : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field create offset 0x10
 __declspec(property(get=__get_create, put=__set_create)) int64_t  create;

/// @brief Field exit offset 0x18
 __declspec(property(get=__get_exit, put=__set_exit)) int64_t  exit;

/// @brief Field kernel offset 0x20
 __declspec(property(get=__get_kernel, put=__set_kernel)) int64_t  kernel;

/// @brief Field user offset 0x28
 __declspec(property(get=__get_user, put=__set_user)) int64_t  user;

 __declspec(property(get=get_TotalProcessorTime)) ::System::TimeSpan  TotalProcessorTime;

constexpr void __set_create(int64_t  value) ;

constexpr int64_t& __get_create() ;

constexpr int64_t const& __get_create() const;

constexpr void __set_exit(int64_t  value) ;

constexpr int64_t& __get_exit() ;

constexpr int64_t const& __get_exit() const;

constexpr void __set_kernel(int64_t  value) ;

constexpr int64_t& __get_kernel() ;

constexpr int64_t const& __get_kernel() const;

constexpr void __set_user(int64_t  value) ;

constexpr int64_t& __get_user() ;

constexpr int64_t const& __get_user() const;

/// @brief Method get_TotalProcessorTime addr 0x2970134 size 0xc virtual false final false
inline ::System::TimeSpan get_TotalProcessorTime() ;

static inline ::System::Diagnostics::ProcessThreadTimes* New_ctor() ;

/// @brief Method .ctor addr 0x296fd30 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ProcessThreadTimes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProcessThreadTimes(ProcessThreadTimes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProcessThreadTimes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProcessThreadTimes(ProcessThreadTimes const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ProcessThreadTimes()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ProcessThreadTimes, 0x30>, "Size mismatch!");

} // namespace end def System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::ProcessThreadTimes);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessThreadTimes*, "System.Diagnostics", "ProcessThreadTimes");
