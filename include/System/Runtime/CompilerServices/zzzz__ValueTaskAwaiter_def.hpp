#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ValueTaskAwaiter)
namespace System {
class Object;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class __ValueTaskAwaiter____c;
}
namespace System {
class Action;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class __ValueTaskAwaiter____c;
}
namespace System::Runtime::CompilerServices {
struct ValueTaskAwaiter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__ValueTaskAwaiter____c);
MARK_VAL_T(::System::Runtime::CompilerServices::ValueTaskAwaiter);
// Type: ::<>c
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3389))
// CS Name: ::ValueTaskAwaiter::<>c*
class CORDL_TYPE __ValueTaskAwaiter____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::Runtime::CompilerServices::__ValueTaskAwaiter____c*  value) ;

static inline ::System::Runtime::CompilerServices::__ValueTaskAwaiter____c* getStaticF___9() ;

static inline ::System::Runtime::CompilerServices::__ValueTaskAwaiter____c* New_ctor() ;

/// @brief Method .ctor addr 0x24dbc8c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__9_0 addr 0x24dbc94 size 0x74 virtual false final false
inline void __cctor_b__9_0(::System::Object*  state) ;

// Ctor Parameters [CppParam { name: "", ty: "__ValueTaskAwaiter____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ValueTaskAwaiter____c(__ValueTaskAwaiter____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ValueTaskAwaiter____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ValueTaskAwaiter____c(__ValueTaskAwaiter____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ValueTaskAwaiter____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__ValueTaskAwaiter____c, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ValueTaskAwaiter
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3390))
// CS Name: ::System.Runtime.CompilerServices::ValueTaskAwaiter
struct CORDL_TYPE ValueTaskAwaiter : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using __c = ::System::Runtime::CompilerServices::__ValueTaskAwaiter____c;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::System::Threading::Tasks::ValueTask  _value;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

static inline void setStaticF_s_invokeActionDelegate(::System::Action_1<::System::Object*>*  value) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_s_invokeActionDelegate() ;

constexpr void __set__value(::System::Threading::Tasks::ValueTask  value) ;

constexpr ::System::Threading::Tasks::ValueTask& __get__value() ;

constexpr ::System::Threading::Tasks::ValueTask const& __get__value() const;

/// @brief Method .ctor addr 0x24db61c size 0x8 virtual false final false
inline void _ctor(::System::Threading::Tasks::ValueTask  value) ;

/// @brief Method get_IsCompleted addr 0x24db624 size 0x108 virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x24db72c size 0x100 virtual false final false
inline void GetResult() ;

/// @brief Method OnCompleted addr 0x24db82c size 0x18c virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x24db9c8 size 0x18c virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: None }]
constexpr ValueTaskAwaiter(::System::Threading::Tasks::ValueTask  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTaskAwaiter()  = default;


// Fields

// Static field s_invokeActionDelegate


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::ValueTaskAwaiter, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::__ValueTaskAwaiter____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__ValueTaskAwaiter____c*, "System.Runtime.CompilerServices", "ValueTaskAwaiter/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ValueTaskAwaiter, "System.Runtime.CompilerServices", "ValueTaskAwaiter");
