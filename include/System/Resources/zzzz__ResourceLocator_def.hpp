#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceLocator)
namespace System {
class Object;
}
namespace System::Resources {
struct ResourceTypeCode;
}
// Forward declare root types
namespace System::Resources {
struct ResourceLocator;
}
// Write type traits
MARK_VAL_T(::System::Resources::ResourceLocator);
// Type: System.Resources::ResourceLocator
namespace System::Resources {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3439))
// CS Name: ::System.Resources::ResourceLocator
struct CORDL_TYPE ResourceLocator : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::System::Object*  _value;

/// @brief Field _dataPos offset 0x8
 __declspec(property(get=__get__dataPos, put=__set__dataPos)) int32_t  _dataPos;

 __declspec(property(get=get_DataPosition)) int32_t  DataPosition;

 __declspec(property(get=get_Value, put=set_Value)) ::System::Object*  Value;

constexpr void __set__value(::System::Object*  value) ;

constexpr ::System::Object* __get__value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__value() const;

constexpr void __set__dataPos(int32_t  value) ;

constexpr int32_t& __get__dataPos() ;

constexpr int32_t const& __get__dataPos() const;

/// @brief Method .ctor addr 0x24e0708 size 0xc virtual false final false
inline void _ctor(int32_t  dataPos, ::System::Object*  value) ;

/// @brief Method get_DataPosition addr 0x24e1f98 size 0x8 virtual false final false
inline int32_t get_DataPosition() ;

/// @brief Method get_Value addr 0x24e1fa0 size 0x8 virtual false final false
inline ::System::Object* get_Value() ;

/// @brief Method set_Value addr 0x24e1fa8 size 0x8 virtual false final false
inline void set_Value(::System::Object*  value) ;

/// @brief Method CanCache addr 0x24e06fc size 0xc virtual false final false
static inline bool CanCache(::System::Resources::ResourceTypeCode  value) ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_dataPos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ResourceLocator(::System::Object*  _value, int32_t  _dataPos) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ResourceLocator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ResourceLocator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceLocator, 0x10>, "Size mismatch!");

} // namespace end def System::Resources
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceLocator, "System.Resources", "ResourceLocator");
