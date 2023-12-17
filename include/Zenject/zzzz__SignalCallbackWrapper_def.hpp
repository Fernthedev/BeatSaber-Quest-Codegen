#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SignalCallbackWrapper)
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SignalBus;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Type;
}
namespace Zenject {
class SignalBindingBindInfo;
}
// Forward declare root types
namespace Zenject {
class SignalCallbackWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalCallbackWrapper);
// Type: Zenject::SignalCallbackWrapper
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10649))
// CS Name: ::Zenject::SignalCallbackWrapper*
class CORDL_TYPE SignalCallbackWrapper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _signalBus offset 0x10
 __declspec(property(get=__get__signalBus, put=__set__signalBus)) ::Zenject::SignalBus*  _signalBus;

/// @brief Field _action offset 0x18
 __declspec(property(get=__get__action, put=__set__action)) ::System::Action_1<::System::Object*>*  _action;

/// @brief Field _signalType offset 0x20
 __declspec(property(get=__get__signalType, put=__set__signalType)) ::System::Type*  _signalType;

/// @brief Field _identifier offset 0x28
 __declspec(property(get=__get__identifier, put=__set__identifier)) ::System::Object*  _identifier;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__signalBus(::Zenject::SignalBus*  value) ;

constexpr ::Zenject::SignalBus* __get__signalBus() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SignalBus*> __get__signalBus() const;

constexpr void __set__action(::System::Action_1<::System::Object*>*  value) ;

constexpr ::System::Action_1<::System::Object*>* __get__action() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> __get__action() const;

constexpr void __set__signalType(::System::Type*  value) ;

constexpr ::System::Type* __get__signalType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__signalType() const;

constexpr void __set__identifier(::System::Object*  value) ;

constexpr ::System::Object* __get__identifier() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__identifier() const;

static inline ::Zenject::SignalCallbackWrapper* New_ctor(::Zenject::SignalBindingBindInfo*  bindInfo, ::System::Action_1<::System::Object*>*  action, ::Zenject::SignalBus*  signalBus) ;

/// @brief Method .ctor addr 0x2ec1c28 size 0xc8 virtual false final false
inline void _ctor(::Zenject::SignalBindingBindInfo*  bindInfo, ::System::Action_1<::System::Object*>*  action, ::Zenject::SignalBus*  signalBus) ;

/// @brief Method OnSignalFired addr 0x2ec1cf0 size 0x24 virtual false final false
inline void OnSignalFired(::System::Object*  signal) ;

/// @brief Method Dispose addr 0x2ec1d14 size 0xa0 virtual true final true
inline void Dispose() ;

/// @brief Method __zenCreate addr 0x2ec1db4 size 0x178 virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2ec1f2c size 0x394 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "SignalCallbackWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalCallbackWrapper(SignalCallbackWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalCallbackWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalCallbackWrapper(SignalCallbackWrapper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignalCallbackWrapper()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalCallbackWrapper, 0x30>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SignalCallbackWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalCallbackWrapper*, "Zenject", "SignalCallbackWrapper");
