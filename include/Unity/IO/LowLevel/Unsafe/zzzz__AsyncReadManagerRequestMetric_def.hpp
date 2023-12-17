#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncReadManagerRequestMetric)
namespace Unity::IO::LowLevel::Unsafe {
struct ProcessingState;
}
namespace Unity::IO::LowLevel::Unsafe {
struct Priority;
}
namespace Unity::IO::LowLevel::Unsafe {
struct FileReadType;
}
namespace Unity::IO::LowLevel::Unsafe {
struct AssetLoadingSubsystem;
}
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct AsyncReadManagerRequestMetric;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric);
// Type: Unity.IO.LowLevel.Unsafe::AsyncReadManagerRequestMetric
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9990))
// CS Name: ::Unity.IO.LowLevel.Unsafe::AsyncReadManagerRequestMetric
struct CORDL_TYPE AsyncReadManagerRequestMetric : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <AssetName>k__BackingField offset 0x0
 __declspec(property(get=__get__AssetName_k__BackingField, put=__set__AssetName_k__BackingField)) ::StringW  _AssetName_k__BackingField;

/// @brief Field <FileName>k__BackingField offset 0x8
 __declspec(property(get=__get__FileName_k__BackingField, put=__set__FileName_k__BackingField)) ::StringW  _FileName_k__BackingField;

/// @brief Field <OffsetBytes>k__BackingField offset 0x10
 __declspec(property(get=__get__OffsetBytes_k__BackingField, put=__set__OffsetBytes_k__BackingField)) uint64_t  _OffsetBytes_k__BackingField;

/// @brief Field <SizeBytes>k__BackingField offset 0x18
 __declspec(property(get=__get__SizeBytes_k__BackingField, put=__set__SizeBytes_k__BackingField)) uint64_t  _SizeBytes_k__BackingField;

/// @brief Field <AssetTypeId>k__BackingField offset 0x20
 __declspec(property(get=__get__AssetTypeId_k__BackingField, put=__set__AssetTypeId_k__BackingField)) uint64_t  _AssetTypeId_k__BackingField;

/// @brief Field <CurrentBytesRead>k__BackingField offset 0x28
 __declspec(property(get=__get__CurrentBytesRead_k__BackingField, put=__set__CurrentBytesRead_k__BackingField)) uint64_t  _CurrentBytesRead_k__BackingField;

/// @brief Field <BatchReadCount>k__BackingField offset 0x30
 __declspec(property(get=__get__BatchReadCount_k__BackingField, put=__set__BatchReadCount_k__BackingField)) uint32_t  _BatchReadCount_k__BackingField;

/// @brief Field <IsBatchRead>k__BackingField offset 0x34
 __declspec(property(get=__get__IsBatchRead_k__BackingField, put=__set__IsBatchRead_k__BackingField)) bool  _IsBatchRead_k__BackingField;

/// @brief Field <State>k__BackingField offset 0x38
 __declspec(property(get=__get__State_k__BackingField, put=__set__State_k__BackingField)) ::Unity::IO::LowLevel::Unsafe::ProcessingState  _State_k__BackingField;

/// @brief Field <ReadType>k__BackingField offset 0x3c
 __declspec(property(get=__get__ReadType_k__BackingField, put=__set__ReadType_k__BackingField)) ::Unity::IO::LowLevel::Unsafe::FileReadType  _ReadType_k__BackingField;

/// @brief Field <PriorityLevel>k__BackingField offset 0x40
 __declspec(property(get=__get__PriorityLevel_k__BackingField, put=__set__PriorityLevel_k__BackingField)) ::Unity::IO::LowLevel::Unsafe::Priority  _PriorityLevel_k__BackingField;

/// @brief Field <Subsystem>k__BackingField offset 0x44
 __declspec(property(get=__get__Subsystem_k__BackingField, put=__set__Subsystem_k__BackingField)) ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  _Subsystem_k__BackingField;

/// @brief Field <RequestTimeMicroseconds>k__BackingField offset 0x48
 __declspec(property(get=__get__RequestTimeMicroseconds_k__BackingField, put=__set__RequestTimeMicroseconds_k__BackingField)) double_t  _RequestTimeMicroseconds_k__BackingField;

/// @brief Field <TimeInQueueMicroseconds>k__BackingField offset 0x50
 __declspec(property(get=__get__TimeInQueueMicroseconds_k__BackingField, put=__set__TimeInQueueMicroseconds_k__BackingField)) double_t  _TimeInQueueMicroseconds_k__BackingField;

/// @brief Field <TotalTimeMicroseconds>k__BackingField offset 0x58
 __declspec(property(get=__get__TotalTimeMicroseconds_k__BackingField, put=__set__TotalTimeMicroseconds_k__BackingField)) double_t  _TotalTimeMicroseconds_k__BackingField;

constexpr void __set__AssetName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__AssetName_k__BackingField() ;

constexpr ::StringW const& __get__AssetName_k__BackingField() const;

constexpr void __set__FileName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__FileName_k__BackingField() ;

constexpr ::StringW const& __get__FileName_k__BackingField() const;

constexpr void __set__OffsetBytes_k__BackingField(uint64_t  value) ;

constexpr uint64_t& __get__OffsetBytes_k__BackingField() ;

constexpr uint64_t const& __get__OffsetBytes_k__BackingField() const;

constexpr void __set__SizeBytes_k__BackingField(uint64_t  value) ;

constexpr uint64_t& __get__SizeBytes_k__BackingField() ;

constexpr uint64_t const& __get__SizeBytes_k__BackingField() const;

constexpr void __set__AssetTypeId_k__BackingField(uint64_t  value) ;

constexpr uint64_t& __get__AssetTypeId_k__BackingField() ;

constexpr uint64_t const& __get__AssetTypeId_k__BackingField() const;

constexpr void __set__CurrentBytesRead_k__BackingField(uint64_t  value) ;

constexpr uint64_t& __get__CurrentBytesRead_k__BackingField() ;

constexpr uint64_t const& __get__CurrentBytesRead_k__BackingField() const;

constexpr void __set__BatchReadCount_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__BatchReadCount_k__BackingField() ;

constexpr uint32_t const& __get__BatchReadCount_k__BackingField() const;

constexpr void __set__IsBatchRead_k__BackingField(bool  value) ;

constexpr bool& __get__IsBatchRead_k__BackingField() ;

constexpr bool const& __get__IsBatchRead_k__BackingField() const;

constexpr void __set__State_k__BackingField(::Unity::IO::LowLevel::Unsafe::ProcessingState  value) ;

constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState& __get__State_k__BackingField() ;

constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState const& __get__State_k__BackingField() const;

constexpr void __set__ReadType_k__BackingField(::Unity::IO::LowLevel::Unsafe::FileReadType  value) ;

constexpr ::Unity::IO::LowLevel::Unsafe::FileReadType& __get__ReadType_k__BackingField() ;

constexpr ::Unity::IO::LowLevel::Unsafe::FileReadType const& __get__ReadType_k__BackingField() const;

constexpr void __set__PriorityLevel_k__BackingField(::Unity::IO::LowLevel::Unsafe::Priority  value) ;

constexpr ::Unity::IO::LowLevel::Unsafe::Priority& __get__PriorityLevel_k__BackingField() ;

constexpr ::Unity::IO::LowLevel::Unsafe::Priority const& __get__PriorityLevel_k__BackingField() const;

constexpr void __set__Subsystem_k__BackingField(::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  value) ;

constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem& __get__Subsystem_k__BackingField() ;

constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const& __get__Subsystem_k__BackingField() const;

constexpr void __set__RequestTimeMicroseconds_k__BackingField(double_t  value) ;

constexpr double_t& __get__RequestTimeMicroseconds_k__BackingField() ;

constexpr double_t const& __get__RequestTimeMicroseconds_k__BackingField() const;

constexpr void __set__TimeInQueueMicroseconds_k__BackingField(double_t  value) ;

constexpr double_t& __get__TimeInQueueMicroseconds_k__BackingField() ;

constexpr double_t const& __get__TimeInQueueMicroseconds_k__BackingField() const;

constexpr void __set__TotalTimeMicroseconds_k__BackingField(double_t  value) ;

constexpr double_t& __get__TotalTimeMicroseconds_k__BackingField() ;

constexpr double_t const& __get__TotalTimeMicroseconds_k__BackingField() const;

// Ctor Parameters [CppParam { name: "_AssetName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_FileName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_OffsetBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_SizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_AssetTypeId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_CurrentBytesRead_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_BatchReadCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_IsBatchRead_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_State_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::ProcessingState", modifiers: "", def_value: None }, CppParam { name: "_ReadType_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::FileReadType", modifiers: "", def_value: None }, CppParam { name: "_PriorityLevel_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::Priority", modifiers: "", def_value: None }, CppParam { name: "_Subsystem_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem", modifiers: "", def_value: None }, CppParam { name: "_RequestTimeMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_TimeInQueueMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_TotalTimeMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: None }]
constexpr AsyncReadManagerRequestMetric(::StringW  _AssetName_k__BackingField, ::StringW  _FileName_k__BackingField, uint64_t  _OffsetBytes_k__BackingField, uint64_t  _SizeBytes_k__BackingField, uint64_t  _AssetTypeId_k__BackingField, uint64_t  _CurrentBytesRead_k__BackingField, uint32_t  _BatchReadCount_k__BackingField, bool  _IsBatchRead_k__BackingField, ::Unity::IO::LowLevel::Unsafe::ProcessingState  _State_k__BackingField, ::Unity::IO::LowLevel::Unsafe::FileReadType  _ReadType_k__BackingField, ::Unity::IO::LowLevel::Unsafe::Priority  _PriorityLevel_k__BackingField, ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  _Subsystem_k__BackingField, double_t  _RequestTimeMicroseconds_k__BackingField, double_t  _TimeInQueueMicroseconds_k__BackingField, double_t  _TotalTimeMicroseconds_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncReadManagerRequestMetric(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncReadManagerRequestMetric()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, 0x60>, "Size mismatch!");

} // namespace end def Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, "Unity.IO.LowLevel.Unsafe", "AsyncReadManagerRequestMetric");
