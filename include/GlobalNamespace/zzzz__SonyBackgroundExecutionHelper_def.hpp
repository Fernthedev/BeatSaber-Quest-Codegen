#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SonyBackgroundExecutionHelper)
namespace System {
class Action;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyBackgroundExecutionHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyBackgroundExecutionHelper);
// Type: ::SonyBackgroundExecutionHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4579))
// CS Name: ::SonyBackgroundExecutionHelper*
class CORDL_TYPE SonyBackgroundExecutionHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field didGoToBackgroundExecutionEvent offset 0x10
 __declspec(property(get=__get_didGoToBackgroundExecutionEvent, put=__set_didGoToBackgroundExecutionEvent)) ::System::Action*  didGoToBackgroundExecutionEvent;

/// @brief Field didGoToForegroundExecutionEvent offset 0x18
 __declspec(property(get=__get_didGoToForegroundExecutionEvent, put=__set_didGoToForegroundExecutionEvent)) ::System::Action*  didGoToForegroundExecutionEvent;

/// @brief Field _isInBackgroundExecution offset 0x20
 __declspec(property(get=__get__isInBackgroundExecution, put=__set__isInBackgroundExecution)) bool  _isInBackgroundExecution;

 __declspec(property(get=get_isInBackgroundExecution)) bool  isInBackgroundExecution;

/// @brief Convert operator to "::Zenject::ITickable"
constexpr operator  ::Zenject::ITickable*() noexcept;

constexpr void __set_didGoToBackgroundExecutionEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didGoToBackgroundExecutionEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didGoToBackgroundExecutionEvent() const;

constexpr void __set_didGoToForegroundExecutionEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didGoToForegroundExecutionEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didGoToForegroundExecutionEvent() const;

constexpr void __set__isInBackgroundExecution(bool  value) ;

constexpr bool& __get__isInBackgroundExecution() ;

constexpr bool const& __get__isInBackgroundExecution() const;

/// @brief Method add_didGoToBackgroundExecutionEvent addr 0x2368df4 size 0x9c virtual false final false
inline void add_didGoToBackgroundExecutionEvent(::System::Action*  value) ;

/// @brief Method remove_didGoToBackgroundExecutionEvent addr 0x2368e90 size 0x9c virtual false final false
inline void remove_didGoToBackgroundExecutionEvent(::System::Action*  value) ;

/// @brief Method add_didGoToForegroundExecutionEvent addr 0x2368f2c size 0x9c virtual false final false
inline void add_didGoToForegroundExecutionEvent(::System::Action*  value) ;

/// @brief Method remove_didGoToForegroundExecutionEvent addr 0x2368fc8 size 0x9c virtual false final false
inline void remove_didGoToForegroundExecutionEvent(::System::Action*  value) ;

/// @brief Method get_isInBackgroundExecution addr 0x2369064 size 0x8 virtual false final false
inline bool get_isInBackgroundExecution() ;

/// @brief Method Tick addr 0x236906c size 0x28 virtual true final true
inline void Tick() ;

static inline ::GlobalNamespace::SonyBackgroundExecutionHelper* New_ctor() ;

/// @brief Method .ctor addr 0x2369094 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SonyBackgroundExecutionHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SonyBackgroundExecutionHelper(SonyBackgroundExecutionHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SonyBackgroundExecutionHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SonyBackgroundExecutionHelper(SonyBackgroundExecutionHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SonyBackgroundExecutionHelper()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyBackgroundExecutionHelper, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyBackgroundExecutionHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyBackgroundExecutionHelper*, "", "SonyBackgroundExecutionHelper");
