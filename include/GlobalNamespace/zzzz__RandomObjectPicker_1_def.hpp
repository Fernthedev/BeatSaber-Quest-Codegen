#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RandomObjectPicker_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class RandomObjectPicker_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class RandomObjectPicker_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RandomObjectPicker_1);
// Type: ::RandomObjectPicker`1
// Type: ::RandomObjectPicker`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14377)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14377), inst: 2 })
// CS Name: ::RandomObjectPicker`1<T>*
class CORDL_TYPE RandomObjectPicker_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _objects offset 0x10
 __declspec(property(get=__get__objects, put=__set__objects)) ::ArrayW<T,::Array<T>*>  _objects;

/// @brief Field _lastPickTime offset 0x18
 __declspec(property(get=__get__lastPickTime, put=__set__lastPickTime)) float_t  _lastPickTime;

/// @brief Field _minimumPickInterval offset 0x1c
 __declspec(property(get=__get__minimumPickInterval, put=__set__minimumPickInterval)) float_t  _minimumPickInterval;

constexpr void __set__objects(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__objects() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__objects() const;

constexpr void __set__lastPickTime(float_t  value) ;

constexpr float_t& __get__lastPickTime() ;

constexpr float_t const& __get__lastPickTime() const;

constexpr void __set__minimumPickInterval(float_t  value) ;

constexpr float_t& __get__minimumPickInterval() ;

constexpr float_t const& __get__minimumPickInterval() const;

static inline ::GlobalNamespace::RandomObjectPicker_1<T>* New_ctor(T  obj, float_t  minimumPickInterval) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  obj, float_t  minimumPickInterval) ;

static inline ::GlobalNamespace::RandomObjectPicker_1<T>* New_ctor(::ArrayW<T,::Array<T>*>  objects, float_t  minimumPickInterval) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<T,::Array<T>*>  objects, float_t  minimumPickInterval) ;

/// @brief Method PickRandomObject addr 0x0 size 0xffffffffffffffff virtual false final false
inline T PickRandomObject() ;

// Ctor Parameters [CppParam { name: "", ty: "RandomObjectPicker_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomObjectPicker_1(RandomObjectPicker_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomObjectPicker_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomObjectPicker_1(RandomObjectPicker_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RandomObjectPicker_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RandomObjectPicker_1, "", "RandomObjectPicker`1");
