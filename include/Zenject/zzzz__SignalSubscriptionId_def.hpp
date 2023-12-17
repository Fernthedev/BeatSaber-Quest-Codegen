#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SignalSubscriptionId)
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace Zenject {
struct BindingId;
}
// Forward declare root types
namespace Zenject {
struct SignalSubscriptionId;
}
// Write type traits
MARK_VAL_T(::Zenject::SignalSubscriptionId);
// Type: Zenject::SignalSubscriptionId
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10662))
// CS Name: ::Zenject::SignalSubscriptionId
struct CORDL_TYPE SignalSubscriptionId : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _signalId offset 0x0
 __declspec(property(get=__get__signalId, put=__set__signalId)) ::Zenject::BindingId  _signalId;

/// @brief Field _callback offset 0x10
 __declspec(property(get=__get__callback, put=__set__callback)) ::System::Object*  _callback;

 __declspec(property(get=get_SignalId)) ::Zenject::BindingId  SignalId;

 __declspec(property(get=get_Callback)) ::System::Object*  Callback;

/// @brief Convert operator to "::System::IEquatable_1<::Zenject::SignalSubscriptionId>"
constexpr operator  ::System::IEquatable_1<::Zenject::SignalSubscriptionId>*() ;

constexpr void __set__signalId(::Zenject::BindingId  value) ;

constexpr ::Zenject::BindingId& __get__signalId() ;

constexpr ::Zenject::BindingId const& __get__signalId() const;

constexpr void __set__callback(::System::Object*  value) ;

constexpr ::System::Object* __get__callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__callback() const;

/// @brief Method .ctor addr 0x2ec4290 size 0xc virtual false final false
inline void _ctor(::Zenject::BindingId  signalId, ::System::Object*  callback) ;

/// @brief Method get_SignalId addr 0x2ec429c size 0xc virtual false final false
inline ::Zenject::BindingId get_SignalId() ;

/// @brief Method get_Callback addr 0x2ec42a8 size 0x8 virtual false final false
inline ::System::Object* get_Callback() ;

/// @brief Method GetHashCode addr 0x2ec42b0 size 0x48 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2ec42f8 size 0x90 virtual true final false
inline bool Equals(::System::Object*  that) ;

/// @brief Method Equals addr 0x2ec4388 size 0xb0 virtual true final true
inline bool Equals(::Zenject::SignalSubscriptionId  that) ;

/// @brief Method op_Equality addr 0x2ec4438 size 0x30 virtual false final false
static inline bool op_Equality(::Zenject::SignalSubscriptionId  left, ::Zenject::SignalSubscriptionId  right) ;

/// @brief Method op_Inequality addr 0x2ec4468 size 0x34 virtual false final false
static inline bool op_Inequality(::Zenject::SignalSubscriptionId  left, ::Zenject::SignalSubscriptionId  right) ;

// Ctor Parameters [CppParam { name: "_signalId", ty: "::Zenject::BindingId", modifiers: "", def_value: None }, CppParam { name: "_callback", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr SignalSubscriptionId(::Zenject::BindingId  _signalId, ::System::Object*  _callback) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SignalSubscriptionId(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SignalSubscriptionId()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalSubscriptionId, 0x18>, "Size mismatch!");

} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalSubscriptionId, "Zenject", "SignalSubscriptionId");
