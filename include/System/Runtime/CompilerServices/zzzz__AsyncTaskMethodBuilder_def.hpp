#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncTaskMethodBuilder)
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder);
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3401))
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder
struct CORDL_TYPE AsyncTaskMethodBuilder : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_builder offset 0x0
 __declspec(property(get=__get_m_builder, put=__set_m_builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult>  m_builder;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task*  Task;

static inline void setStaticF_s_cachedCompleted(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  value) ;

static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* getStaticF_s_cachedCompleted() ;

constexpr void __set_m_builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult>& __get_m_builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult> const& __get_m_builder() const;

/// @brief Method Create addr 0x24dca3c size 0xc virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x24da7a4 size 0x58 virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method get_Task addr 0x24da930 size 0x48 virtual false final false
inline ::System::Threading::Tasks::Task* get_Task() ;

/// @brief Method SetResult addr 0x24da814 size 0x78 virtual false final false
inline void SetResult() ;

/// @brief Method SetException addr 0x24da890 size 0x58 virtual false final false
inline void SetException(::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "m_builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult>  m_builder) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncTaskMethodBuilder(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncTaskMethodBuilder()  = default;


// Fields

// Static field s_cachedCompleted


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder");
