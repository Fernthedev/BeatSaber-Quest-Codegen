#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryPoolBindInfo)
namespace Zenject {
struct PoolExpandMethods;
}
// Forward declare root types
namespace Zenject {
class MemoryPoolBindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::MemoryPoolBindInfo);
// Type: Zenject::MemoryPoolBindInfo
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10951))
// CS Name: ::Zenject::MemoryPoolBindInfo*
class CORDL_TYPE MemoryPoolBindInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <ShowExpandWarning>k__BackingField offset 0x10
 __declspec(property(get=__get__ShowExpandWarning_k__BackingField, put=__set__ShowExpandWarning_k__BackingField)) bool  _ShowExpandWarning_k__BackingField;

/// @brief Field <ExpandMethod>k__BackingField offset 0x14
 __declspec(property(get=__get__ExpandMethod_k__BackingField, put=__set__ExpandMethod_k__BackingField)) ::Zenject::PoolExpandMethods  _ExpandMethod_k__BackingField;

/// @brief Field <InitialSize>k__BackingField offset 0x18
 __declspec(property(get=__get__InitialSize_k__BackingField, put=__set__InitialSize_k__BackingField)) int32_t  _InitialSize_k__BackingField;

/// @brief Field <MaxSize>k__BackingField offset 0x1c
 __declspec(property(get=__get__MaxSize_k__BackingField, put=__set__MaxSize_k__BackingField)) int32_t  _MaxSize_k__BackingField;

 __declspec(property(get=get_ShowExpandWarning, put=set_ShowExpandWarning)) bool  ShowExpandWarning;

 __declspec(property(get=get_ExpandMethod, put=set_ExpandMethod)) ::Zenject::PoolExpandMethods  ExpandMethod;

 __declspec(property(get=get_InitialSize, put=set_InitialSize)) int32_t  InitialSize;

 __declspec(property(get=get_MaxSize, put=set_MaxSize)) int32_t  MaxSize;

constexpr void __set__ShowExpandWarning_k__BackingField(bool  value) ;

constexpr bool& __get__ShowExpandWarning_k__BackingField() ;

constexpr bool const& __get__ShowExpandWarning_k__BackingField() const;

constexpr void __set__ExpandMethod_k__BackingField(::Zenject::PoolExpandMethods  value) ;

constexpr ::Zenject::PoolExpandMethods& __get__ExpandMethod_k__BackingField() ;

constexpr ::Zenject::PoolExpandMethods const& __get__ExpandMethod_k__BackingField() const;

constexpr void __set__InitialSize_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__InitialSize_k__BackingField() ;

constexpr int32_t const& __get__InitialSize_k__BackingField() const;

constexpr void __set__MaxSize_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__MaxSize_k__BackingField() ;

constexpr int32_t const& __get__MaxSize_k__BackingField() const;

static inline ::Zenject::MemoryPoolBindInfo* New_ctor() ;

/// @brief Method .ctor addr 0x2edf680 size 0x2c virtual false final false
inline void _ctor() ;

/// @brief Method get_ShowExpandWarning addr 0x2edf6ac size 0x8 virtual false final false
inline bool get_ShowExpandWarning() ;

/// @brief Method set_ShowExpandWarning addr 0x2edf6b4 size 0xc virtual false final false
inline void set_ShowExpandWarning(bool  value) ;

/// @brief Method get_ExpandMethod addr 0x2edf6c0 size 0x8 virtual false final false
inline ::Zenject::PoolExpandMethods get_ExpandMethod() ;

/// @brief Method set_ExpandMethod addr 0x2edf6c8 size 0x8 virtual false final false
inline void set_ExpandMethod(::Zenject::PoolExpandMethods  value) ;

/// @brief Method get_InitialSize addr 0x2edf6d0 size 0x8 virtual false final false
inline int32_t get_InitialSize() ;

/// @brief Method set_InitialSize addr 0x2edf6d8 size 0x8 virtual false final false
inline void set_InitialSize(int32_t  value) ;

/// @brief Method get_MaxSize addr 0x2edf6e0 size 0x8 virtual false final false
inline int32_t get_MaxSize() ;

/// @brief Method set_MaxSize addr 0x2edf6e8 size 0x8 virtual false final false
inline void set_MaxSize(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBindInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryPoolBindInfo(MemoryPoolBindInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBindInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryPoolBindInfo(MemoryPoolBindInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MemoryPoolBindInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::MemoryPoolBindInfo, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::MemoryPoolBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MemoryPoolBindInfo*, "Zenject", "MemoryPoolBindInfo");
