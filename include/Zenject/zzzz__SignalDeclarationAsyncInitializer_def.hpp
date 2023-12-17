#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SignalDeclarationAsyncInitializer)
namespace Zenject {
class TickableManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
template<typename T>
class LazyInject_1;
}
namespace Zenject {
class SignalDeclaration;
}
namespace Zenject {
class IInitializable;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class SignalDeclarationAsyncInitializer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalDeclarationAsyncInitializer);
// Type: Zenject::SignalDeclarationAsyncInitializer
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10668))
// CS Name: ::Zenject::SignalDeclarationAsyncInitializer*
class CORDL_TYPE SignalDeclarationAsyncInitializer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _tickManager offset 0x10
 __declspec(property(get=__get__tickManager, put=__set__tickManager)) ::Zenject::LazyInject_1<::Zenject::TickableManager*>*  _tickManager;

/// @brief Field _declarations offset 0x18
 __declspec(property(get=__get__declarations, put=__set__declarations)) ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*  _declarations;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

constexpr void __set__tickManager(::Zenject::LazyInject_1<::Zenject::TickableManager*>*  value) ;

constexpr ::Zenject::LazyInject_1<::Zenject::TickableManager*>* __get__tickManager() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::LazyInject_1<::Zenject::TickableManager*>*> __get__tickManager() const;

constexpr void __set__declarations(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* __get__declarations() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*> __get__declarations() const;

static inline ::Zenject::SignalDeclarationAsyncInitializer* New_ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*  declarations, ::Zenject::LazyInject_1<::Zenject::TickableManager*>*  tickManager) ;

/// @brief Method .ctor addr 0x2ec61dc size 0x2c virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*  declarations, ::Zenject::LazyInject_1<::Zenject::TickableManager*>*  tickManager) ;

/// @brief Method Initialize addr 0x2ec6208 size 0x104 virtual true final true
inline void Initialize() ;

/// @brief Method __zenCreate addr 0x2ec630c size 0x11c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2ec6428 size 0x304 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationAsyncInitializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalDeclarationAsyncInitializer(SignalDeclarationAsyncInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationAsyncInitializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalDeclarationAsyncInitializer(SignalDeclarationAsyncInitializer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignalDeclarationAsyncInitializer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalDeclarationAsyncInitializer, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SignalDeclarationAsyncInitializer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDeclarationAsyncInitializer*, "Zenject", "SignalDeclarationAsyncInitializer");
