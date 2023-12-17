#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__OperationCanceledException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TaskCanceledException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskCanceledException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskCanceledException);
// Type: System.Threading.Tasks::TaskCanceledException
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2455))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2756))
// CS Name: ::System.Threading.Tasks::TaskCanceledException*
class CORDL_TYPE TaskCanceledException : public ::System::OperationCanceledException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::System::OperationCanceledException)]{};

/// @brief Field _canceledTask offset 0x98
 __declspec(property(get=__get__canceledTask, put=__set__canceledTask)) ::System::Threading::Tasks::Task*  _canceledTask;

constexpr void __set__canceledTask(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get__canceledTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get__canceledTask() const;

static inline ::System::Threading::Tasks::TaskCanceledException* New_ctor() ;

/// @brief Method .ctor addr 0x2620bfc size 0x4c virtual false final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::TaskCanceledException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x2620c48 size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::Threading::Tasks::TaskCanceledException* New_ctor(::System::Threading::Tasks::Task*  task) ;

/// @brief Method .ctor addr 0x2620c50 size 0x80 virtual false final false
inline void _ctor(::System::Threading::Tasks::Task*  task) ;

static inline ::System::Threading::Tasks::TaskCanceledException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x2620cf4 size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskCanceledException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskCanceledException(TaskCanceledException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskCanceledException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskCanceledException(TaskCanceledException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskCanceledException()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskCanceledException, 0xa0>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskCanceledException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskCanceledException*, "System.Threading.Tasks", "TaskCanceledException");
