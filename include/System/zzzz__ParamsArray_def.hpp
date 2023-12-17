#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParamsArray)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct ParamsArray;
}
// Write type traits
MARK_VAL_T(::System::ParamsArray);
// Type: System::ParamsArray
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2458))
// CS Name: ::System::ParamsArray
struct CORDL_TYPE ParamsArray : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _arg0 offset 0x0
 __declspec(property(get=__get__arg0, put=__set__arg0)) ::System::Object*  _arg0;

/// @brief Field _arg1 offset 0x8
 __declspec(property(get=__get__arg1, put=__set__arg1)) ::System::Object*  _arg1;

/// @brief Field _arg2 offset 0x10
 __declspec(property(get=__get__arg2, put=__set__arg2)) ::System::Object*  _arg2;

/// @brief Field _args offset 0x18
 __declspec(property(get=__get__args, put=__set__args)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  _args;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item)) ::System::Object*  Item[];

static inline void setStaticF_s_oneArgArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

static inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> getStaticF_s_oneArgArray() ;

static inline void setStaticF_s_twoArgArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

static inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> getStaticF_s_twoArgArray() ;

static inline void setStaticF_s_threeArgArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

static inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> getStaticF_s_threeArgArray() ;

constexpr void __set__arg0(::System::Object*  value) ;

constexpr ::System::Object* __get__arg0() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__arg0() const;

constexpr void __set__arg1(::System::Object*  value) ;

constexpr ::System::Object* __get__arg1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__arg1() const;

constexpr void __set__arg2(::System::Object*  value) ;

constexpr ::System::Object* __get__arg2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__arg2() const;

constexpr void __set__args(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get__args() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get__args() const;

/// @brief Method .ctor addr 0x25be18c size 0x74 virtual false final false
inline void _ctor(::System::Object*  arg0) ;

/// @brief Method .ctor addr 0x25be200 size 0x78 virtual false final false
inline void _ctor(::System::Object*  arg0, ::System::Object*  arg1) ;

/// @brief Method .ctor addr 0x25be278 size 0x84 virtual false final false
inline void _ctor(::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method .ctor addr 0x25be2fc size 0x60 virtual false final false
inline void _ctor(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method get_Length addr 0x25be35c size 0x1c virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x25be378 size 0x10 virtual false final false
inline ::System::Object* get_Item(int32_t  index) ;

/// @brief Method GetAtSlow addr 0x25be388 size 0x54 virtual false final false
inline ::System::Object* GetAtSlow(int32_t  index) ;

// Ctor Parameters [CppParam { name: "_arg0", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_arg1", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_arg2", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_args", ty: "::ArrayW<::System::Object*,::Array<::System::Object*>*>", modifiers: "", def_value: None }]
constexpr ParamsArray(::System::Object*  _arg0, ::System::Object*  _arg1, ::System::Object*  _arg2, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  _args) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ParamsArray(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ParamsArray()  = default;


// Fields

// Static field s_oneArgArray

// Static field s_twoArgArray

// Static field s_threeArgArray


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ParamsArray, 0x20>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::ParamsArray, "System", "ParamsArray");
