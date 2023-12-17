#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugConsoleController)
namespace GlobalNamespace {
struct __DebugConsoleController___TryExecuteCommand_d__8;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class ITickable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IInitializable;
}
namespace GlobalNamespace {
struct __DebugConsoleController___StartConsoleReadTask_d__20;
}
namespace GlobalNamespace {
class ConsoleCommandBase;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommandsAsync_d__7;
}
namespace System {
class Type;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommands_d__6;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ReadInputLoopAsync_d__21;
}
namespace UnityEngine {
struct LogType;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::IO {
class StreamReader;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System {
class Object;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
struct ValueTaskAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
class DebugConsoleController;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommandsAsync_d__7;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommands_d__6;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ReadInputLoopAsync_d__21;
}
namespace GlobalNamespace {
struct __DebugConsoleController___StartConsoleReadTask_d__20;
}
namespace GlobalNamespace {
struct __DebugConsoleController___TryExecuteCommand_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DebugConsoleController);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController__ConsoleMessage);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8);
// Type: ::ConsoleMessage
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5992))
// CS Name: ::DebugConsoleController::ConsoleMessage
struct CORDL_TYPE __DebugConsoleController__ConsoleMessage : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Message offset 0x0
 __declspec(property(get=__get_Message, put=__set_Message)) ::StringW  Message;

/// @brief Field Type offset 0x8
 __declspec(property(get=__get_Type, put=__set_Type)) ::UnityEngine::LogType  Type;

constexpr void __set_Message(::StringW  value) ;

constexpr ::StringW& __get_Message() ;

constexpr ::StringW const& __get_Message() const;

constexpr void __set_Type(::UnityEngine::LogType  value) ;

constexpr ::UnityEngine::LogType& __get_Type() ;

constexpr ::UnityEngine::LogType const& __get_Type() const;

/// @brief Method .ctor addr 0x230f0e8 size 0xc virtual false final false
inline void _ctor(::StringW  message, ::UnityEngine::LogType  type) ;

/// @brief Method op_Implicit addr 0x230df7c size 0x8 virtual false final false
static inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage op_Implicit___GlobalNamespace____DebugConsoleController__ConsoleMessage(::StringW  message) ;

// Ctor Parameters [CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: None }]
constexpr __DebugConsoleController__ConsoleMessage(::StringW  Message, ::UnityEngine::LogType  Type) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DebugConsoleController__ConsoleMessage(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DebugConsoleController__ConsoleMessage()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<ExecuteCommands>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5993))
// CS Name: ::DebugConsoleController::<ExecuteCommands>d__6
struct CORDL_TYPE __DebugConsoleController___ExecuteCommands_d__6 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::DebugConsoleController*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::DebugConsoleController*  value) ;

constexpr ::GlobalNamespace::DebugConsoleController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DebugConsoleController*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2313264 size 0x2fc virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2313560 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __DebugConsoleController___ExecuteCommands_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::DebugConsoleController*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DebugConsoleController___ExecuteCommands_d__6(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DebugConsoleController___ExecuteCommands_d__6()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<ExecuteCommandsAsync>d__7
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5994))
// CS Name: ::DebugConsoleController::<ExecuteCommandsAsync>d__7
struct CORDL_TYPE __DebugConsoleController___ExecuteCommandsAsync_d__7 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::DebugConsoleController*  __4__this;

/// @brief Field <messages>5__2 offset 0x28
 __declspec(property(get=__get__messages_5__2, put=__set__messages_5__2)) ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  _messages_5__2;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::DebugConsoleController*  value) ;

constexpr ::GlobalNamespace::DebugConsoleController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DebugConsoleController*> __get___4__this() const;

constexpr void __set__messages_5__2(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* __get__messages_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*> __get__messages_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x231356c size 0x3e0 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x231394c size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "", def_value: None }, CppParam { name: "_messages_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __DebugConsoleController___ExecuteCommandsAsync_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::DebugConsoleController*  __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  _messages_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DebugConsoleController___ExecuteCommandsAsync_d__7(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DebugConsoleController___ExecuteCommandsAsync_d__7()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<TryExecuteCommand>d__8
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5995))
// CS Name: ::DebugConsoleController::<TryExecuteCommand>d__8
struct CORDL_TYPE __DebugConsoleController___TryExecuteCommand_d__8 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field commandText offset 0x20
 __declspec(property(get=__get_commandText, put=__set_commandText)) ::StringW  commandText;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::DebugConsoleController*  __4__this;

/// @brief Field messages offset 0x30
 __declspec(property(get=__get_messages, put=__set_messages)) ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  messages;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set_commandText(::StringW  value) ;

constexpr ::StringW& __get_commandText() ;

constexpr ::StringW const& __get_commandText() const;

constexpr void __set___4__this(::GlobalNamespace::DebugConsoleController*  value) ;

constexpr ::GlobalNamespace::DebugConsoleController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DebugConsoleController*> __get___4__this() const;

constexpr void __set_messages(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* __get_messages() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*> __get_messages() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2313958 size 0x3f8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2313d50 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "commandText", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "", def_value: None }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __DebugConsoleController___TryExecuteCommand_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  commandText, ::GlobalNamespace::DebugConsoleController*  __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  messages, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DebugConsoleController___TryExecuteCommand_d__8(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DebugConsoleController___TryExecuteCommand_d__8()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<StartConsoleReadTask>d__20
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5996))
// CS Name: ::DebugConsoleController::<StartConsoleReadTask>d__20
struct CORDL_TYPE __DebugConsoleController___StartConsoleReadTask_d__20 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2313d5c size 0x270 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2313fcc size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __DebugConsoleController___StartConsoleReadTask_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DebugConsoleController___StartConsoleReadTask_d__20(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DebugConsoleController___StartConsoleReadTask_d__20()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<ReadInputLoopAsync>d__21
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5997))
// CS Name: ::DebugConsoleController::<ReadInputLoopAsync>d__21
struct CORDL_TYPE __DebugConsoleController___ReadInputLoopAsync_d__21 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <inputStream>5__2 offset 0x20
 __declspec(property(get=__get__inputStream_5__2, put=__set__inputStream_5__2)) ::System::IO::Stream*  _inputStream_5__2;

/// @brief Field <reader>5__3 offset 0x28
 __declspec(property(get=__get__reader_5__3, put=__set__reader_5__3)) ::System::IO::StreamReader*  _reader_5__3;

/// @brief Field <>7__wrap3 offset 0x30
 __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3)) ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4 offset 0x38
 __declspec(property(get=__get___7__wrap4, put=__set___7__wrap4)) int32_t  __7__wrap4;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

/// @brief Field <>u__2 offset 0x48
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set__inputStream_5__2(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get__inputStream_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get__inputStream_5__2() const;

constexpr void __set__reader_5__3(::System::IO::StreamReader*  value) ;

constexpr ::System::IO::StreamReader* __get__reader_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> __get__reader_5__3() const;

constexpr void __set___7__wrap3(::System::Object*  value) ;

constexpr ::System::Object* __get___7__wrap3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___7__wrap3() const;

constexpr void __set___7__wrap4(int32_t  value) ;

constexpr int32_t& __get___7__wrap4() ;

constexpr int32_t const& __get___7__wrap4() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::ValueTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::ValueTaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::ValueTaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x2313fd8 size 0x844 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x231481c size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "_inputStream_5__2", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "_reader_5__3", ty: "::System::IO::StreamReader*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None }]
constexpr __DebugConsoleController___ReadInputLoopAsync_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::IO::Stream*  _inputStream_5__2, ::System::IO::StreamReader*  _reader_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DebugConsoleController___ReadInputLoopAsync_d__21(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DebugConsoleController___ReadInputLoopAsync_d__21()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::DebugConsoleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5998))
// CS Name: ::DebugConsoleController*
class CORDL_TYPE DebugConsoleController : public ::System::Object {
public:
// Declarations
using _ReadInputLoopAsync_d__21 = ::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21;

using _StartConsoleReadTask_d__20 = ::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20;

using _TryExecuteCommand_d__8 = ::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8;

using _ExecuteCommandsAsync_d__7 = ::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7;

using _ExecuteCommands_d__6 = ::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6;

using ConsoleMessage = ::GlobalNamespace::__DebugConsoleController__ConsoleMessage;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _commands offset 0x18
 __declspec(property(get=__get__commands, put=__set__commands)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ConsoleCommandBase*>*  _commands;

/// @brief Field _commandsExecutionTask offset 0x20
 __declspec(property(get=__get__commandsExecutionTask, put=__set__commandsExecutionTask)) ::System::Threading::Tasks::Task*  _commandsExecutionTask;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

/// @brief Convert operator to "::Zenject::ITickable"
constexpr operator  ::Zenject::ITickable*() noexcept;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

static inline void setStaticF__stringsFromSTDIN(::System::Collections::Generic::Queue_1<::StringW>*  value) ;

static inline ::System::Collections::Generic::Queue_1<::StringW>* getStaticF__stringsFromSTDIN() ;

static inline void setStaticF__readInputTask(::System::Threading::Tasks::Task*  value) ;

static inline ::System::Threading::Tasks::Task* getStaticF__readInputTask() ;

constexpr void __set__commands(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ConsoleCommandBase*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ConsoleCommandBase*>* __get__commands() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ConsoleCommandBase*>*> __get__commands() const;

constexpr void __set__commandsExecutionTask(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get__commandsExecutionTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get__commandsExecutionTask() const;

/// @brief Method ExecuteCommands addr 0x2311f14 size 0x94 virtual false final false
inline void ExecuteCommands() ;

/// @brief Method ExecuteCommandsAsync addr 0x2311fa8 size 0xcc virtual false final false
inline ::System::Threading::Tasks::Task* ExecuteCommandsAsync() ;

/// @brief Method TryExecuteCommand addr 0x2312074 size 0xdc virtual false final false
inline ::System::Threading::Tasks::Task* TryExecuteCommand(::StringW  commandText, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  messages) ;

/// @brief Method CommandNotFoundMessage addr 0x2312150 size 0x74 virtual false final false
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage CommandNotFoundMessage(::StringW  command) ;

/// @brief Method StripExtraWhitespace addr 0x23121c4 size 0x124 virtual false final false
inline ::StringW StripExtraWhitespace(::StringW  commandText) ;

/// @brief Method FillDictOfCommands addr 0x23122e8 size 0x3a4 virtual false final false
inline void FillDictOfCommands(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>*  commandInstances) ;

/// @brief Method CheckCommand addr 0x231268c size 0x138 virtual false final false
static inline void CheckCommand(::GlobalNamespace::ConsoleCommandBase*  command) ;

/// @brief Method GetAllConsoleCommandInstances addr 0x23127c4 size 0x528 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* GetAllConsoleCommandInstances() ;

/// @brief Method IsCommandClass addr 0x2312cec size 0xc0 virtual false final false
inline bool IsCommandClass(::System::Type*  type) ;

/// @brief Method GetCommands addr 0x2312dac size 0x8 virtual false final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ConsoleCommandBase*>* GetCommands() ;

/// @brief Method GetCommand addr 0x230fa38 size 0x78 virtual false final false
inline ::GlobalNamespace::ConsoleCommandBase* GetCommand(::StringW  commandName) ;

/// @brief Method Initialize addr 0x2312db4 size 0xec virtual true final true
inline void Initialize() ;

/// @brief Method Tick addr 0x2312f28 size 0x94 virtual true final true
inline void Tick() ;

/// @brief Method DisplayMessage addr 0x2312fbc size 0xc8 virtual false final false
static inline void DisplayMessage(::GlobalNamespace::__DebugConsoleController__ConsoleMessage  message) ;

/// @brief Method StartConsoleReadTask addr 0x2312ea0 size 0x88 virtual false final false
static inline void StartConsoleReadTask() ;

/// @brief Method ReadInputLoopAsync addr 0x2313084 size 0xcc virtual false final false
static inline ::System::Threading::Tasks::Task* ReadInputLoopAsync() ;

static inline ::GlobalNamespace::DebugConsoleController* New_ctor() ;

/// @brief Method .ctor addr 0x2313150 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DebugConsoleController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugConsoleController(DebugConsoleController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugConsoleController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugConsoleController(DebugConsoleController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DebugConsoleController()  = default;
public:


// Fields

// Static field _stringsFromSTDIN

// Static field _readInputTask


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DebugConsoleController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DebugConsoleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugConsoleController*, "", "DebugConsoleController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController__ConsoleMessage, "", "DebugConsoleController/ConsoleMessage");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7, "", "DebugConsoleController/<ExecuteCommandsAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6, "", "DebugConsoleController/<ExecuteCommands>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21, "", "DebugConsoleController/<ReadInputLoopAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20, "", "DebugConsoleController/<StartConsoleReadTask>d__20");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8, "", "DebugConsoleController/<TryExecuteCommand>d__8");
