#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ExecutionContextSwitcher)
namespace System::Threading {
class Thread;
}
namespace System::Threading {
struct __ExecutionContext__Reader;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
struct ExecutionContextSwitcher;
}
// Write type traits
MARK_VAL_T(::System::Threading::ExecutionContextSwitcher);
// Type: System.Threading::ExecutionContextSwitcher
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2710))
// CS Name: ::System.Threading::ExecutionContextSwitcher
struct CORDL_TYPE ExecutionContextSwitcher : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field outerEC offset 0x0
 __declspec(property(get=__get_outerEC, put=__set_outerEC)) ::System::Threading::__ExecutionContext__Reader  outerEC;

/// @brief Field outerECBelongsToScope offset 0x8
 __declspec(property(get=__get_outerECBelongsToScope, put=__set_outerECBelongsToScope)) bool  outerECBelongsToScope;

/// @brief Field hecsw offset 0x10
 __declspec(property(get=__get_hecsw, put=__set_hecsw)) ::System::Object*  hecsw;

/// @brief Field thread offset 0x18
 __declspec(property(get=__get_thread, put=__set_thread)) ::System::Threading::Thread*  thread;

constexpr void __set_outerEC(::System::Threading::__ExecutionContext__Reader  value) ;

constexpr ::System::Threading::__ExecutionContext__Reader& __get_outerEC() ;

constexpr ::System::Threading::__ExecutionContext__Reader const& __get_outerEC() const;

constexpr void __set_outerECBelongsToScope(bool  value) ;

constexpr bool& __get_outerECBelongsToScope() ;

constexpr bool const& __get_outerECBelongsToScope() const;

constexpr void __set_hecsw(::System::Object*  value) ;

constexpr ::System::Object* __get_hecsw() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_hecsw() const;

constexpr void __set_thread(::System::Threading::Thread*  value) ;

constexpr ::System::Threading::Thread* __get_thread() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> __get_thread() const;

/// @brief Method UndoNoThrow addr 0x2616c48 size 0x88 virtual false final false
inline bool UndoNoThrow() ;

/// @brief Method Undo addr 0x2616cd0 size 0x88 virtual false final false
inline void Undo() ;

// Ctor Parameters [CppParam { name: "outerEC", ty: "::System::Threading::__ExecutionContext__Reader", modifiers: "", def_value: None }, CppParam { name: "outerECBelongsToScope", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hecsw", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "thread", ty: "::System::Threading::Thread*", modifiers: "", def_value: None }]
constexpr ExecutionContextSwitcher(::System::Threading::__ExecutionContext__Reader  outerEC, bool  outerECBelongsToScope, ::System::Object*  hecsw, ::System::Threading::Thread*  thread) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ExecutionContextSwitcher(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ExecutionContextSwitcher()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ExecutionContextSwitcher, 0x20>, "Size mismatch!");

} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ExecutionContextSwitcher, "System.Threading", "ExecutionContextSwitcher");
