#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SparselyPopulatedArrayAddInfo_1)
namespace System::Threading {
template<typename T>
class SparselyPopulatedArrayFragment_1;
}
// Forward declare root types
namespace System::Threading {
template<typename T>
struct SparselyPopulatedArrayAddInfo_1;
}
namespace System::Threading {
template<::il2cpp_utils::il2cpp_reference_type T>
struct SparselyPopulatedArrayAddInfo_1<T>;
}
// Write type traits
MARK_GEN_VAL_T(::System::Threading::SparselyPopulatedArrayAddInfo_1);
// Type: System.Threading::SparselyPopulatedArrayAddInfo`1
// Type: System.Threading::SparselyPopulatedArrayAddInfo`1
namespace System::Threading {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2693))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2693), inst: 2 })
// CS Name: ::System.Threading::SparselyPopulatedArrayAddInfo`1<T>
struct CORDL_TYPE SparselyPopulatedArrayAddInfo_1<T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _source offset 0x0
 __declspec(property(get=__get__source, put=__set__source)) ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  _source;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

 __declspec(property(get=get_Source)) ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  Source;

 __declspec(property(get=get_Index)) int32_t  Index;

constexpr void __set__source(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value) ;

constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* __get__source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> __get__source() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  source, int32_t  index) ;

/// @brief Method get_Source addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Source() ;

/// @brief Method get_Index addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Index() ;

// Ctor Parameters [CppParam { name: "_source", ty: "::System::Threading::SparselyPopulatedArrayFragment_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SparselyPopulatedArrayAddInfo_1(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  _source, int32_t  _index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SparselyPopulatedArrayAddInfo_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SparselyPopulatedArrayAddInfo_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::SparselyPopulatedArrayAddInfo_1, "System.Threading", "SparselyPopulatedArrayAddInfo`1");
