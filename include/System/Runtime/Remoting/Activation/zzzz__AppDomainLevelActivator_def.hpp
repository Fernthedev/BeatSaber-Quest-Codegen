#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AppDomainLevelActivator)
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class AppDomainLevelActivator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::AppDomainLevelActivator);
// Type: System.Runtime.Remoting.Activation::AppDomainLevelActivator
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3130))
// CS Name: ::System.Runtime.Remoting.Activation::AppDomainLevelActivator*
class CORDL_TYPE AppDomainLevelActivator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _activationUrl offset 0x10
 __declspec(property(get=__get__activationUrl, put=__set__activationUrl)) ::StringW  _activationUrl;

/// @brief Field _next offset 0x18
 __declspec(property(get=__get__next, put=__set__next)) ::System::Runtime::Remoting::Activation::IActivator*  _next;

 __declspec(property(get=get_NextActivator)) ::System::Runtime::Remoting::Activation::IActivator*  NextActivator;

/// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
constexpr operator  ::System::Runtime::Remoting::Activation::IActivator*() noexcept;

constexpr void __set__activationUrl(::StringW  value) ;

constexpr ::StringW& __get__activationUrl() ;

constexpr ::StringW const& __get__activationUrl() const;

constexpr void __set__next(::System::Runtime::Remoting::Activation::IActivator*  value) ;

constexpr ::System::Runtime::Remoting::Activation::IActivator* __get__next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Activation::IActivator*> __get__next() const;

static inline ::System::Runtime::Remoting::Activation::AppDomainLevelActivator* New_ctor(::StringW  activationUrl, ::System::Runtime::Remoting::Activation::IActivator*  next) ;

/// @brief Method .ctor addr 0x24a44fc size 0x2c virtual false final false
inline void _ctor(::StringW  activationUrl, ::System::Runtime::Remoting::Activation::IActivator*  next) ;

/// @brief Method get_NextActivator addr 0x24a4a9c size 0x8 virtual true final true
inline ::System::Runtime::Remoting::Activation::IActivator* get_NextActivator() ;

/// @brief Method Activate addr 0x24a4aa4 size 0x4dc virtual true final true
inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage*  ctorCall) ;

// Ctor Parameters [CppParam { name: "", ty: "AppDomainLevelActivator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppDomainLevelActivator(AppDomainLevelActivator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppDomainLevelActivator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppDomainLevelActivator(AppDomainLevelActivator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AppDomainLevelActivator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Activation::AppDomainLevelActivator, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::AppDomainLevelActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::AppDomainLevelActivator*, "System.Runtime.Remoting.Activation", "AppDomainLevelActivator");
