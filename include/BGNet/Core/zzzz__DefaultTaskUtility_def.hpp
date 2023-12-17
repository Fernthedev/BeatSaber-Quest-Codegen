#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultTaskUtility)
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace System {
struct TimeSpan;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace BGNet::Core {
class DefaultTaskUtility;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::DefaultTaskUtility);
// Type: BGNet.Core::DefaultTaskUtility
namespace BGNet::Core {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13000))
// CS Name: ::BGNet.Core::DefaultTaskUtility*
class CORDL_TYPE DefaultTaskUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::BGNet::Core::ITaskUtility"
constexpr operator  ::BGNet::Core::ITaskUtility*() noexcept;

static inline void setStaticF_instance(::BGNet::Core::DefaultTaskUtility*  value) ;

static inline ::BGNet::Core::DefaultTaskUtility* getStaticF_instance() ;

/// @brief Method Delay addr 0xe5df40 size 0x68 virtual true final true
inline ::System::Threading::Tasks::Task* Delay(::System::TimeSpan  timeSpan, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CancellationTokenWithDelay addr 0xe5dfa8 size 0x68 virtual true final true
inline ::System::Threading::CancellationToken CancellationTokenWithDelay(::System::TimeSpan  timeSpan) ;

/// @brief Method Wait addr 0xe5e010 size 0x18 virtual true final true
inline void Wait(::System::Threading::Tasks::Task*  task) ;

/// @brief Method Wait addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
inline T Wait(::System::Threading::Tasks::Task_1<T>*  task) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T1,typename T2>
inline ::System::Threading::Tasks::Task_1<T2>* ContinueWith(::System::Threading::Tasks::Task_1<T1>*  task, ::System::Func_2<::System::Threading::Tasks::Task_1<T1>*,::System::Threading::Tasks::Task_1<T2>*>*  continuation) ;

/// @brief Method Run addr 0xe5e028 size 0x68 virtual true final true
inline ::System::Threading::Tasks::Task* Run(::System::Action*  action, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Run addr 0xe5e090 size 0x68 virtual true final true
inline ::System::Threading::Tasks::Task* Run(::System::Func_1<::System::Threading::Tasks::Task*>*  func, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Run(::System::Func_1<T>*  func, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::BGNet::Core::DefaultTaskUtility* New_ctor() ;

/// @brief Method .ctor addr 0xe5e0f8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTaskUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultTaskUtility(DefaultTaskUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTaskUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultTaskUtility(DefaultTaskUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultTaskUtility()  = default;
public:


// Fields

// Static field instance


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::DefaultTaskUtility, 0x10>, "Size mismatch!");

} // namespace end def BGNet::Core
NEED_NO_BOX(::BGNet::Core::DefaultTaskUtility);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::DefaultTaskUtility*, "BGNet.Core", "DefaultTaskUtility");
