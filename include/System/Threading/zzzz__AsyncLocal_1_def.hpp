#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncLocal_1)
namespace System::Threading {
class IAsyncLocal;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace System::Threading {
template<typename T>
struct AsyncLocalValueChangedArgs_1;
}
// Forward declare root types
namespace System::Threading {
template<typename T>
class AsyncLocal_1;
}
namespace System::Threading {
template<::il2cpp_utils::il2cpp_reference_type T>
class AsyncLocal_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::AsyncLocal_1);
// Type: System.Threading::AsyncLocal`1
// Type: System.Threading::AsyncLocal`1
namespace System::Threading {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2657))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2657), inst: 2 })
// CS Name: ::System.Threading::AsyncLocal`1<T>*
class CORDL_TYPE AsyncLocal_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_valueChangedHandler offset 0x10
 __declspec(property(get=__get_m_valueChangedHandler, put=__set_m_valueChangedHandler)) ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*  m_valueChangedHandler;

 __declspec(property(put=set_Value)) T  Value;

/// @brief Convert operator to "::System::Threading::IAsyncLocal"
constexpr operator  ::System::Threading::IAsyncLocal*() noexcept;

constexpr void __set_m_valueChangedHandler(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*  value) ;

constexpr ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* __get_m_valueChangedHandler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*> __get_m_valueChangedHandler() const;

static inline ::System::Threading::AsyncLocal_1<T>* New_ctor(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*  valueChangedHandler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*  valueChangedHandler) ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Value(T  value) ;

/// @brief Method System.Threading.IAsyncLocal.OnValueChanged addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Threading_IAsyncLocal_OnValueChanged(::System::Object*  previousValueObj, ::System::Object*  currentValueObj, bool  contextChanged) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncLocal_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncLocal_1(AsyncLocal_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncLocal_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncLocal_1(AsyncLocal_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncLocal_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::AsyncLocal_1, "System.Threading", "AsyncLocal`1");
