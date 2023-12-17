#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingId)
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
struct BindingId;
}
// Write type traits
MARK_VAL_T(::Zenject::BindingId);
// Type: Zenject::BindingId
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11158))
// CS Name: ::Zenject::BindingId
struct CORDL_TYPE BindingId : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _type offset 0x0
 __declspec(property(get=__get__type, put=__set__type)) ::System::Type*  _type;

/// @brief Field _identifier offset 0x8
 __declspec(property(get=__get__identifier, put=__set__identifier)) ::System::Object*  _identifier;

 __declspec(property(get=get_Type, put=set_Type)) ::System::Type*  Type;

 __declspec(property(get=get_Identifier, put=set_Identifier)) ::System::Object*  Identifier;

/// @brief Convert operator to "::System::IEquatable_1<::Zenject::BindingId>"
constexpr operator  ::System::IEquatable_1<::Zenject::BindingId>*() ;

constexpr void __set__type(::System::Type*  value) ;

constexpr ::System::Type* __get__type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__type() const;

constexpr void __set__identifier(::System::Object*  value) ;

constexpr ::System::Object* __get__identifier() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__identifier() const;

/// @brief Method .ctor addr 0x2ee5410 size 0x8 virtual false final false
inline void _ctor(::System::Type*  type, ::System::Object*  identifier) ;

/// @brief Method get_Type addr 0x2ef6240 size 0x8 virtual false final false
inline ::System::Type* get_Type() ;

/// @brief Method set_Type addr 0x2ef6248 size 0x8 virtual false final false
inline void set_Type(::System::Type*  value) ;

/// @brief Method get_Identifier addr 0x2ef6250 size 0x8 virtual false final false
inline ::System::Object* get_Identifier() ;

/// @brief Method set_Identifier addr 0x2ef6258 size 0x8 virtual false final false
inline void set_Identifier(::System::Object*  value) ;

/// @brief Method ToString addr 0x2ef6260 size 0x120 virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2ef6380 size 0x50 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2ef63d0 size 0x84 virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals addr 0x2ef64f8 size 0x18 virtual true final true
inline bool Equals(::Zenject::BindingId  that) ;

/// @brief Method op_Equality addr 0x2ef6454 size 0xa4 virtual false final false
static inline bool op_Equality(::Zenject::BindingId  left, ::Zenject::BindingId  right) ;

/// @brief Method op_Inequality addr 0x2ef6510 size 0x18 virtual false final false
static inline bool op_Inequality(::Zenject::BindingId  left, ::Zenject::BindingId  right) ;

// Ctor Parameters [CppParam { name: "_type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_identifier", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr BindingId(::System::Type*  _type, ::System::Object*  _identifier) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BindingId(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BindingId()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::BindingId, 0x10>, "Size mismatch!");

} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingId, "Zenject", "BindingId");
